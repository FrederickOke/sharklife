#include "locations.h"
#include <string>
using namespace std;


class Map {
    public:
    // Name: Map() - Default Constructor
    // Description: Contains all map locations. locations are interconnected and may influence eachother when adjacent. bst connections for searching purposes 
    // Preconditions: No map
    // Postconditions:  map class exists to contain
    Map();

    // Name: ~Map - destructor
    // Desc: makes sure everything in tree is deallocated through bst connections
    // Preconditions: none
    // Postconditions everything dynamically allocated is deallocated
    virtual ~Map();

    int getProgress(); //return map completion as num

    //insertion methods
    void insertLocation(Location* location); //properly insert the node into the tree both according to its traversal connections and its bst connections
    
    //HELPER FUNCTIONS
        //function name: recInsert
        //function desc: recursively move through the bst aspect of the map nodes to find and insert target node
        //precondition: node not inserted into tree
        //postcondition: node inserted into bst aspect of tree, cardinal direction pointers not yet correctly associated to other nodes.
    void recInsert(Location* curr, Location* toInsert); //recursive helper function.


    //finding methods: no duplicates allowed in the tree
    Location * findLocation(string targetName); //check if a location by the same name is in the tree
    Location * recFind(string targetName, Location* curr); //recursively look through the tree for target
    
    //rebalancing methods
    bool isEmpty(); //whether the tree is empty


    private:
    int completion; //number of discovered locations out of total locations
    int discoveredLocations; // number of discovered locations
    int totalLocations; //number of total locations in game
    Location* m_root;
    Location* m_currentLocation;
};
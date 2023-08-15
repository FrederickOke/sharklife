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
        //function name: isAsciiLower
        //function desc: compares current tree node and target node ascii values. if target is lower, return true. else return false (higher). if equal, should not be allowed int the tree by other function 
        //precondition: there is one node in the tree and one node to be inserted
        //postcondition: none
    bool isAsciiLower(Location* curr, Location* toInsert);//ascii comparison helper function

    //finding methods: no duplicates in the tree
    //rebalancing methods


    private:
    int completion; //number of discovered locations out of total locations
    int discoveredLocations; // number of discovered locations
    int totalLocations; //number of total locations in game
    Location* m_root;
    Location* m_currentLocation;
};
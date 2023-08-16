#include "locations.h"
#include <string>
using namespace std;


const int FINDMODE = 0;
const int INSERTMODE = 1;

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
    void insertLocation(Location* location); //properly insert the node into the tree bst wise
    void connectToMap(Location* location); //helper to insertLocation, connects the node to its adjacent locations after every location has been inserted to the bst
    

    //finding methods: no duplicates allowed in the tree
    Location * findLocation(string targetName); //check if a location by the same name is in the tree
    
    //name: recFind
    //desc: tree traversal helper function
    //  FINDMODE: check if a location is in the tree recursively. if it is, return the location pointer. if it is not, return nullptr
    //  INSERTMODE: for insertion - check if a location is in the tree recursively. if it is, return nullptr. 
    //         if it is not, return a location pointer to what it's parent would be if it was in the tree.
    //         only used if the tree is non-empty
    Location * recFindIns(string targetName, Location* curr, int mode); //recursively look through the tree for target
    
    //rebalancing methods
    bool isEmpty(); //whether the tree is empty
    Location* getRoot();
    void setRoot(Location* newRoot);


    private:
        int completion; //number of discovered locations out of total locations
        int discoveredLocations; // number of discovered locations
        int totalLocations; //number of total locations in game
        Location* m_root;
        Location* m_currentLocation;
};
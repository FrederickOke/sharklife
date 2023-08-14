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



    //finding methods
    //rebalancing methods


    private:
    int completion; //number of discovered locations out of total locations
    int discoveredLocations; // number of discovered locations
    int totalLocations; //number of total locations in game
    Location* m_root;
    Location* m_currentLocation;
};
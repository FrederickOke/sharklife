#include <string>
using namespace std;


class Map {
    public:
    // Name: Map() - Default Constructor
    // Description: Contains all map locations. locatinos are interconnected in game and also as a bst for searching purposes
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
        //properly insert the node into the tree both according to its traversal connections and its bst connections
    //finding methods
    //rebalancing methods


    private:
    int completion; //number of discovered locations out of total locations
    int discoveredLocations; // number of discovered locations
    int totallocations; //number of total locations in game
    Location* m_root;
    Location* m_currentLocation;
};
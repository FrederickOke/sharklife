#include <string>
using namespace std;


class Location { //the "Nodes" of the map class
    public:
    
    //constructor
    //destructor
    
    //vector of strings to hold places of interest
    //vector of strings to hold information inside location
    
    //get and set description
    string getDesc(); //return description of location
    void setDesc(string); //set locations description
    
      

    private:
    string m_desc; //description of location

    //4 cardinal locations of adjacent locations to this node
    Location* m_north;
    Location* m_south;
    Location* m_east;
    Location* m_west;
};


class Map {
    public:
    // Name: Map() - Default Constructor
    // Description: Abstract class - cannot directly instantiate
    // Preconditions: None
    // Postconditions: Populates variables used in child classes (not specifically used)
    Map();
    // Name: virtual ~Map - virtual destructor
    // Desc: makes sure everything in child class is deallocated
    // Preconditions: none
    // Postconditions everything dynamically allocated is deallocated
    virtual ~Map();

    //purely virtual functions defined in gamemap or sharkmap classes
    virtual int getProgress(); //return map completion


    private:
    Location* m_root;
    Location* m_currentLocation;
};
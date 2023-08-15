#include <iostream>
#include <string>
#include <vector>
using namespace std;


//nodes of the location map "locations"
//each location is predetermined, never changes. discovery, however is dynamic
class Location {
    public:
        Location (); //default constructor for a location
        Location (string name, string desc, bool discovered); //overloaded constructor for location
        ~Location(); //must delete all data pointers point to
        void populateAdjacent(); //populate m_adjacentLocations array
        void connectAdjacents(); //connect current location to its adjacent ones
        
        //get and set description of location
        string getDesc(); //give the player a description of location
        void setDesc(string); //set locations description

        //get and set discovery state
        bool getDiscovered();
        void setDiscovered(bool newState);

        //get and set name
        string getName();
        void setName(string name);

        void getChoices(); //give the player a description of the options available at that location after the description
        void addChoice(string choice); //add a choice to choices vector

        //methods controlling the execution of events

    private:
        bool m_discovered = false;
        
        string m_name; //name of current location
        string m_desc; //description of current location
        vector<string> choices{};

        //traversal connections
        Location* m_north;
        Location* m_south;
        Location* m_east;
        Location* m_west;

        //bst connections
        Location* m_left; //left child
        Location* m_right; //right child

        //private member variables controlling the likelihood of event types. inheritance for specification of event types? event

};




//class to handle events in current and adjacent locations here
class Event {}; //control what happens dynamically, outside of the sharks control upon entering the location
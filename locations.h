#include "Map.h"
#include <iostream>
#include <string>
#include <vector>


//nodes of the location map "locations"
//each location is predetermined, never changes. discovery, however is dynamic
class Location {
    public:
        Location (); //default constructor for a location
        Location (string name, string desc); //overloaded constructor for location
        ~Location(); //must delete all data pointers point to
        void populateAdjacent(); //populate m_adjacentLocations array
        void connectAdjacents(); //connect current location to its adjacent ones
        void getDesc(); //give the player a description of location
        void getChoices(); //give the player a description of the options available at that location after the description
        void addChoice(string choice); //add a choice to choices vector

    private:
        string m_adjacentLocations {}; //array of names of the adjacent locations.
        string m_name; //name of current location
        string m_desc; //description of current location
        vector<string> choices{};

};

//contains data on locations that the shark is in and is near, as well as the game map
//the original map class. shark's map is essentially a copy that checks Island map to populate itself as the shark explores.
//contains Location class pointers. 
class Island: public Map {
public:
private:

};




//class to handle events in current and adjacent locations here
class Event {}; //control what happens dynamically, outside of the sharks control upon entering the location
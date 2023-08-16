#include "locations.h"

//define constructor and destructor
Location::Location(){
    setName(DEFAULTNAME);
    setDesc(DEFAULTDESC);
    setDiscovered(false); //new location undiscovered by default
    
    //set all connections initially to nullptr
    //traverse tree pointers
    setLeft(nullptr);
    setRight(nullptr);
    
    //traverse map pointers
    setNorth(nullptr);
    setSouth(nullptr);
    setEast(nullptr);
    setWest(nullptr);
}
Location::Location(string name, string desc, bool discovered){
    
}

//get and set description
string Location::getDesc(){
    return m_desc;
}
void Location::setDesc(string description){
    m_desc = description;
}

//get and set discovery state
bool Location::getDiscovered(){
    return m_discovered;
}
void Location::setDiscovered(bool newState){
    m_discovered = newState;
}

//get and set name
string Location::getName(){
    return m_name;
}
void Location::setName(string name){
    m_name = name;
}

//add and display choices
void Location::displayChoices(){
    for (int i = 0; i < choices.size(); i++){
        cout << choices[i] << endl;
    }
}
void Location::addChoice(string choice){
    choices.push_back(choice);
}

//methods for tree traversal
Location* Location::getLeft(){
    return m_left;
}
void Location::setLeft(Location* toLeft){
    m_left = toLeft;
}
Location* Location::getRight(){
    return m_right;
}
void Location::setRight(Location* toRight){
    m_right = toRight;
}

//methods for map traversal
Location* Location::getNorth(){
    return m_north;
}
void Location::setNorth(Location* toNorth){
    m_north = toNorth;
}

Location* Location::getSouth(){
    return m_south;
}
void Location::setSouth(Location* toSouth){
    m_south = toSouth;
}

Location* Location::getEast(){
    return m_east;
}
void Location::setEast(Location* toEast){
    m_east = toEast;
}

Location* Location::getWest(){
    return m_west;
}
void Location::setWest(Location* toWest){
    m_west = toWest;
}




#include "locations.h"

//get and set description
string Location::getDesc(){
    return m_desc;
}
void Location::setDesc(string description){
    m_desc = description;
}

//add choices
void Location::addChoice(string choice){
    choices.push_back(choice);
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
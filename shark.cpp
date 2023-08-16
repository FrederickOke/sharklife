#include "shark.h"

//get and set age
int Shark::getAge(){
    return m_age;
}
void Shark::setAge(int age){
    m_age = age;
}


//get and set hungerLevel
int Shark::getHunger(){
    return m_hungerLevel;
}
void Shark::setHunger(int hungerLevel){
    m_hungerLevel = hungerLevel;
}


//get and set state
string Shark::getState(){
    return m_state;
}
void Shark::setState(string state){
    m_state = state;
}


//get and set experience lvl
int Shark::getExp(){
    return m_experience;
}
void Shark::setExp(int exp){
    m_experience = exp;
}

//get and set location
void Shark::setLocation(Location* location){
    m_currentLocation = location;
}
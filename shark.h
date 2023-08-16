#ifndef SHARK_H
#define SHARK_H

#include <string>
#include "Map.h"
#include "locations.h"
using namespace std;


class Shark { //class to describe the shark, it's possibilities and capabilities

public:
    Shark(); //default constructor for shark
    ~Shark(); //destructor for anything dynamically allocated to shark

    //get and set age
    int getAge();
    void setAge(int age);

    //get and set hunger
    int getHunger();
    void setHunger(int hungerLevel);

    //get and set state
    string getState();
    void setState(string state);

    //get and set experience lvl
    int getExp();
    void setExp(int exp);

    //get and set location
    void setLocation(Location* location); //set the location of the shark
    Location* getLocation(); //get current location of shark

    void hunt(); //shark attempts to hunt for food

private:
    int m_age; //how long the shark has been alive. basically the "score". before reproducing
    int m_hungerLevel; //how much longer the shark can go without being forced into "starvation" state
    string m_state; //physical or psychological status of the shark
    int m_experience; //general experience at a particular stage in life. Resets as the shark advances in age and must adapt to new situations unique to later stages in life.
    
    //shark keeps track of its own general location
    Location* m_currentLocation;
};

#endif

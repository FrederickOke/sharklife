#include <string>
#include "locations.h"
using namespace std;


class Shark { //class to describe the shark, it's possibilities and capabilities

public:
    int getAge();
    int getHunger();
    string getState();
    void changeLocation(); //shark traverses to another location
    void hunt(); //shark attempts to hunt for food

private:
    int m_age; //how long the shark has been alive. basically the "score". before reproducing
    int m_hungerLevel; //how much longer the shark can go without being forced into "starvation" state
    string m_state; //physical or psychological status of the shark

};

class SharkMap { //class to describe the sharks own map of discovered locations and recent events

public:

private:
    //birthplace will be the root of the sharks own map.
};
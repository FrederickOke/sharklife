#include <string>
#include "Map.h"
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
    int m_experience; //general experience at a particular stage in life. Resets as the shark advances in age and must adapt to new situations unique to later stages in life.
    
    //shark keeps track of its own general location
    Location* m_currentLocation;
};

class SharkMap: public Map { //class to describe the sharks own map of discovered locations and recent events
                 //subclass of MAP class, sister class of gameMap class
                 //filled out at shark explores.
public:

private:
    //birthplace will be the root of the sharks own map.
    
};
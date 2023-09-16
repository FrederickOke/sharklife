#ifndef EVENTS_H
#define EVENTS_H

#include "shark.h"

//class controlling things that happen, some of which when player chooses, others by pure chance

class Event {
    public:

        Event ();
        Event (string desc, int skillLevel, float riskChance, float rewardChance);
        ~Event();

        
        //an event may modify or call functions to modify any of these
        friend class Shark;
        friend class Location;
        friend class Map;

        

    private:

};

#endif
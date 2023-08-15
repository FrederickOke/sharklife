#include "Map.h"

bool Map::isAsciiLower(Location* curr, Location* toInsert){
    
    //compare characters at each position in strings
    if (toInsert->getName() < curr->getName()){
        return true;
    } 
    return false; 
}
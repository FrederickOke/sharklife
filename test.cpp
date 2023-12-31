#include <string>
#include "Map.h"
#include "locations.h"
#include "shark.h"
using namespace std;


int main () {

    //create the map
    Map myMap;
    Location* myLocation;

    //create locations. possibly recreate location each time shark enters and/or update choices based on sharks capabilities or state changes
    Location shallows(
        "Shallows", 
        "A safe area where the water is blue and clear, and the light easily penetrates the few meters there are between the surface and the sea floor to give good visibility. Bright corals and short, but dense patches of sea grass obscure view to offer potential cover for fish and small sea-life, but a small to medium-sized predator should be able to both suprise prey hiding inside or use them as cover for ambush.",
        true
    );
    shallows.addChoice("Rush the coral ", "You catch an octopus before it can camouflage!", "You scare away everything within the coral...", .4);
    shallows.addChoice("Rush the grasses ", "You catch and eat a sea snake hiding within!", "You get caught in the grass as a shadow swims away...", .55);
    
    /*
    shallows.addChoice("Stalk the surface ");
    shallows.addChoice("Hide in the coral ");
    shallows.addChoice("Hide in the grasses ");
    */
   
    shallows.addChoice("Move on?", "", "", 1.0);

    //integrate location into the true map (insertion)
    myLocation = &shallows;
    myMap.insertLocation(myLocation);

    //birth the shark
    Shark playerShark;
    playerShark.setLocation(myLocation);
    //give description of location
    cout << playerShark.getLocation()->getDesc() << endl;

    //give list of options
    playerShark.getLocation()->displayChoices();
    //allow player to choose options

    return 0;
}
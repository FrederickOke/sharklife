#include "shark.h"
#include "Map.h"
#include "locations.h"

class Sharklife {

//methods for running the game
//birth the shark at the start of the game

//storage of the game
};

int main () {
    
    //create locations. possibly recreate location each time shark enters and/or update choices based on sharks capabilities or state changes
    Location shallows(
        "Shallows", 
        "A safe area where the water is blue and clear, and the light easily penetrates the few meters there are between the surface and the sea floor to give good visibility. Bright corals and short, but dense patches of sea grass obscure view to offer potential cover for fish and small sea-life, but a small to medium-sized predator should be able to both suprise prey hiding inside or use them as cover for ambush.",
        true
    );
    shallows.addChoice("Rush the coral ");
    shallows.addChoice("Rush the grasses ");
    shallows.addChoice("Stalk the surface ");
    shallows.addChoice("Hide in the coral ");
    shallows.addChoice("Hide in the grasses ");
    shallows.addChoice("Move on.");
    //integrate location into the true map
    //birth the shark
    //give description of location
    //give list of options
    //allow player to choose options

    return 0;
}
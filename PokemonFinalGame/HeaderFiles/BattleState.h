#pragma once
#include "Pokemon.h"

struct BattleState {
    Pokemon playerPokemon; 
    Pokemon wildPokemon;   
    bool playerTurn;        
    bool battleOngoing; 
    
};

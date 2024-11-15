#include "Game.h"
#include "Player.h"
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "ProfessorOak.h"
#include "Utility.h"
#include <iostream>
#include <limits> // Include this header to use std::numeric_limits
#include <string>

int main() {

  // Continue with the main flow of the game
  ProfessorOak professor("Professor Oak");
  Player player;

  // Greet the player and offer Pokemon choices
  professor.greetPlayer(player);
  professor.offerPokemonChoices(player);

  // Explain the main quest
  professor.explainMainQuest(player);

  // Start the main game loop
  Game game;
  game.gameLoop(player);

  return 0;
}
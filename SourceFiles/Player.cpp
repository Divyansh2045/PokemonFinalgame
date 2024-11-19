#pragma once
#include "Player.hpp"
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Utility.hpp"
#include "iostream"
using namespace std;

namespace N_Character
{
    namespace N_Player
    {
        using namespace N_Utility;
        using namespace N_Pokemon;
        using namespace N_Pokemons;

        Player::Player() {
            name = "Trainer";
            chosenPokemon = new Pokemon(); // Using the default Pokemon constructor
        }

        Player::Player(std::string p_name, Pokemon* p_chosenPokemon) {
            name = p_name;
            chosenPokemon = p_chosenPokemon;
        }

        void Player::choosePokemon(int choice) {
            switch ((PokemonChoice)choice) {
            case PokemonChoice::CHARMANDER:
                chosenPokemon = new Pokemon("Charmander", PokemonType::FIRE, 100, 10);
                break;
            case PokemonChoice::BULBASAUR:
                chosenPokemon = new Pokemon("Bulbasaur", PokemonType::GRASS, 100, 8);
                break;
            case PokemonChoice::SQUIRTLE:
                chosenPokemon = new Pokemon("Squirtle", PokemonType::WATER, 100, 9);
                break;
            default:
                chosenPokemon = new Pikachu();
                break;
            }
            std::cout << "Player " << name << " chose " << chosenPokemon->name << "!\n";
            Utility::waitForEnter(); // Wait for user to press Enter before
            // proceeding
        }
    }
}
#include "../../../include/Pokemon/Pokemons/Caterpie.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {

    namespace N_Pokemons {

        using namespace std;

        Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::BUG, 100, 10) {}

        void Caterpie::bugBite(Pokemon* target) {
            cout << name << " uses Bug Bite on " << target->name << "!\n";
            target->takeDamage(20);

        }

        void Caterpie::attack(Move selectedMove, Pokemon* target)
        {
            Pokemon::attack(selectedMove, target);

        }

        if (selectedMove.name == "STICKY WEB")

            int reducedDamage = 5;
        target->reduceAttackPower(reducedDamage);

      
    }
}
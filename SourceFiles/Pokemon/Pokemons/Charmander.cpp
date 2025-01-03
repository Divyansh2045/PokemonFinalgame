#include "../../../include/Pokemon/Pokemons/Charmander.h"
#include "../../../include/Pokemon/PokemonType.h"
#include <iostream>

namespace N_Pokemon {
    namespace N_Pokemons {
        using namespace std;

        Charmander::Charmander() : Pokemon("Charmander", PokemonType::FIRE, 100, 35) {}

        void Charmander::flameThrower(Pokemon* target) {
            cout << name << " uses Flame Thrower on " << target->name << "!\n";
            target->takeDamage(20);
        }

        void Charmander::attack(Move selctedMove, Pokemon* target)
        {
            Pokemon::attack(selctedMove, target);

            if (selectedMove == "BLAZING CHARGE")
            {
                this->takeDamage(10);
                std::cout << name << " takes 10 recoil damage from the Blazing Charge!\n";
                N_Utility::Utility::waitForEnter();
            }
        }
    }
}
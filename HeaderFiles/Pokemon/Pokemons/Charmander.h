#pragma once
#include "../Pokemon.h"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Charmander : public Pokemon {
        public:
            Charmander();
            void flameThrower(Pokemon* target);
            void attack(Pokemon* target) override;
        };

    }
}
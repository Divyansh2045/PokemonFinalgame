#pragma once
#include "../Battle/BattleState.h"
#include "../Character/Player/Player.h"

namespace N_Battle
{
    class Pokemon;
    using namespace N_Character::N_Player;
    using namespace N_Pokemon;

    class BattleManager {
    public:
        void startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon);
    private:
        BattleState battleState;

        void battle();
        void handleBattleOutcome();
        void updateBattleState();
    };
}
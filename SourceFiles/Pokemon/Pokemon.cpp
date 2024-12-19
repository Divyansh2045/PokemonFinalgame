 #pragma once
#include "Pokemon.h"
#include "PokemonType.h"
#include <iostream>
using namespace std;

// Default constructor
Pokemon::Pokemon() {
  name = "Unknown";
  type = PokemonType::NORMAL;
  health = 50;
  maxHealth = 50;
  attackPower = 10;
}

// Parameterized constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health,
                 int p_attackPower) {
  name = p_name;
  type = p_type;
  maxHealth = p_health;
  health = p_health;
  attackPower = p_attackPower;
}

// Copy constructor
Pokemon::Pokemon(const Pokemon &other) {
  name = other.name;
  type = other.type;
  health = other.health;
  maxHealth = other.maxHealth;
  attackPower = other.attackPower;
}

// Reduce HP by the damage amount
void Pokemon::takeDamage(int damage) {
  health -= damage;
  if (health < 0) {
    health = 0;
  }
}

// Check if the Pokemon has fainted
bool Pokemon::isFainted() const { return health <= 0; }

// Restore health to full
void Pokemon::heal() { health = maxHealth; }

// Attack another Pokemon
void Pokemon::attack(Pokemon &target) {
  cout << name << " attacks " << target.name << " for " << attackPower
            << " damage!\n";
  target.takeDamage(attackPower);
}

void Pokemon::printAvailableMoves()
{
    cout << name << "'s available moves" << endl;

    //list out all the moves

    for (size_t i = 0, i < moves.size(), ++i)
    {
        cout << i + 1 << ":" << moves[i].name << "(Power:" << moves[i].power << ")" << endl;
    }
}

int Pokemon::selectMove()
{
    int choice;

    cout << "Choose a move" << endl;
    cin >> choice;

    while (choice < 1 || choice > static_cast<int>(moves.size())) 
    {
        cout << "Invalid choice. Try again: " << endl;
        cin >> choice;
    }

    return choice;    
}

void Pokemon::useMove(Move selectedMove, Pokemon* target) {
    cout << name << " used " << selectedMove.name << "!\n";
    attack(selectedMove, target);

    N_Utility::Utility::waitForEnter();

    cout << "...\n";
    N_Utility::Utility::waitForEnter();

    if (target->isFainted())
        cout << target->name << " fainted!\n";
    else
        cout << target->name << " has " << target->health << " HP left.\n";
}
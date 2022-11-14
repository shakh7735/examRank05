#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

Fireball::Fireball(std::string name, std::string eff) : ASpell(name, eff)
{}

Fireball::~Fireball()
{}

ASpell* Fireball::clone() const
{
   return (new Fireball(name, effects));
}
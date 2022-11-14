#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(std::string name, std::string eff) : ASpell(name, eff)
{}

Fwoosh::~Fwoosh()
{}

ASpell* Fwoosh::clone() const
{
   return (new Fwoosh(name, effects));
}
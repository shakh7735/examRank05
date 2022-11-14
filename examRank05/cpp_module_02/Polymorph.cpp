#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into critter")
{}

Polymorph::Polymorph(std::string name, std::string eff) : ASpell(name, eff)
{}

Polymorph::~Polymorph()
{}

ASpell* Polymorph::clone() const
{
   return (new Polymorph(name, effects));
}
#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into critter")
{}

Polymorph* Polymorph::clone () const
{
    return new Polymorph(*this);
}
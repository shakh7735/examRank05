#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(std::string name, std::string eff) : name(name), effects(eff)
{}

ASpell::ASpell(const ASpell& ref)
{ this->operator=(ref);  }

ASpell & ASpell::operator=(const ASpell& ref)
{
    if (this != &ref)
    {
        name = ref.name;
        effects = ref.effects;
    }   
    return (*this);
}


ASpell::~ASpell()
{}

const std::string ASpell::getName() const
{ return (name); }

const std::string ASpell::getEffects() const
{ return (effects); }


void ASpell::launch(const ATarget &ref) const
{
    ref.getHitBySpell(*this);
}
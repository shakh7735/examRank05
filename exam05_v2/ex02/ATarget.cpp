#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(const ATarget& ref)
{
    this->operator=(ref);
}

ATarget & ATarget::operator=(const ATarget& ref)
{
    if (this != &ref)
    {
        type = ref.type;
    }
    return *this;
}

ATarget::ATarget(std::string type) : type(type)
{}

ATarget::~ATarget()
{}

std::string ATarget::getType() const
{ return type; }

void ATarget::getHitBySpell(const ASpell & ref) const
{ 
    std::cout << type << " has been " << ref.getEffects() << "!\n";
}
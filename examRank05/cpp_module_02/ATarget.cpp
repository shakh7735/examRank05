#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(std::string type) : type(type)
{}

ATarget::ATarget(const ATarget& ref)
{  this->operator=(ref); }

ATarget & ATarget::operator=(const ATarget& ref)
{
    if (this != &ref)
    this->type = ref.type;
    return (*this);
}

ATarget::~ATarget()
{}

const std::string ATarget::getType() const
{ return (type); }

 void ATarget::getHitBySpell(const ASpell& refSpell) const
 {
    std::cout << type << " has been " << refSpell.getEffects() << "!\n";
 }
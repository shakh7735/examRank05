#include "ATarget"

ATarget::ATarget()
{}

ATarget::ATarget(std::string type) : type(type)
{}

ATarget::ATarget(const ATarget& ref)
{ *this = ref; }

ATarget & ATarget::operator=(const ATarget& ref)
{
    type = ref.type;
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
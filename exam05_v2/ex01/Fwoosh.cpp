#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

// Fwoosh::Fwoosh(const Fwoosh& ref)
// {
//     this->operator=(&ref);
// }

// Fwoosh & Fwoosh::operator=(const Fwoosh&)
// {
//     if (this != &ref)
//     {
//         name = ref.name;
//         effects = ref.effects;
//     }
//     return *this;
// }

// Fwoosh::ASpell(std::string name, std::string eff) : ASpell(name, eff)
// {}

// Fwoosh::~Fwoosh()
// {}

Fwoosh* Fwoosh::clone () const
{
    return new Fwoosh(*this);
}

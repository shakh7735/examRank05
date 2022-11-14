#ifndef POLIMORPH_HPP
#define POLIMORPH_HPP

#include "ASpell.hpp"

class Polymorph: public ASpell
{
    public:
        Polymorph();
        Polymorph(std::string, std::string);
        Polymorph(const Polymorph& );
        Polymorph & operator=(const Polymorph&);
        ~Polymorph();

        ASpell* clone() const;
};

#endif
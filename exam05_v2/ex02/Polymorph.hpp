#ifndef POLIMORPH_HPP
#define POLIMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell{

    public :
        Polymorph();
        virtual Polymorph* clone () const;
        
};

#endif
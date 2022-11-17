#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell{

    public :
        Fwoosh();
        // Fwoosh(const Fwoosh&);Fwoosh
        // Fwoosh & operator=(const Fwoosh&);
        // Fwoosh(std::string, std::string);
        // virtual ~Fwoosh();       
        virtual Fwoosh* clone () const;
        
};

#endif
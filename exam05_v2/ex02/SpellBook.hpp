#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook{

    private :
        std::vector<ASpell *> sps;
        
        SpellBook(const SpellBook&);
        SpellBook & operator=(const SpellBook&);
    
    public :
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell *);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};

#endif
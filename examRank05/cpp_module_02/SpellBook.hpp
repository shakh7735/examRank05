#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
class ASpell;

class SpellBook{

    private:
        std::vector<ASpell*> list;
        SpellBook(const SpellBook& );
        SpellBook & operator=(const SpellBook&);

    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(const ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};

#endif
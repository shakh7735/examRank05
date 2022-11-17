#ifndef WARLOK_HPP
#define WARLOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"


class Warlock{

    private :
        std::string name;
        std::string title;
        SpellBook *book;

        Warlock();
        Warlock(const Warlock&);
        Warlock & operator=(const Warlock&);
    
    public :
        Warlock(std::string, std::string);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;
        void setTitle(std::string);

        void introduce() const;

        void learnSpell(ASpell *);
        void forgetSpell(std::string );
        void launchSpell(std::string, ATarget &);


};

#endif
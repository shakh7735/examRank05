#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"
class ASpell;

class ATarget{

    private :
        std::string type;

    public :
        ATarget();
        ATarget(const ATarget&);
        ATarget & operator=(const ATarget&);
        ATarget(std::string);
        virtual ~ATarget();

        std::string getType() const;
       
        virtual ATarget* clone () const = 0;
        void getHitBySpell(const ASpell &) const;

};

#endif
#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>

#include "ASpell.hpp"
class ASpell;

class ATarget{

    protected:
        std::string type;

    public:
        ATarget();
        ATarget(std::string);
        ATarget(const ATarget& );
        ATarget & operator=(const ATarget&);
        virtual ~ATarget();

        const std::string getType() const;
        virtual ATarget* clone() const = 0;

        void getHitBySpell(const ASpell&) const;

};

#endif
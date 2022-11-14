#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget"
class ATarget;

class ASpell{

    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(std::string, std::string);
        ASpell(const ASpell& );
        ASpell & operator=(const ASpell&);
        virtual ~ASpell();

        const std::string getName() const;
        const std::string getEffects() const;
        virtual ASpell* clone() const = 0;

        void launch(const ATarget &) const;
};

#endif
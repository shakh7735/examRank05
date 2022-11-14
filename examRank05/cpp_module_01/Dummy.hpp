#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget"

class Dummy: public ATarget
{
    public:
        Dummy();
        Dummy(std::string, std::string);
        Dummy(const Dummy& );
        Dummy & operator=(const Dummy&);
        virtual ~Dummy();

        ATarget* clone() const;
};

#endif
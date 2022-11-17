// Make a TargetGenerator class, in canonical form, and as before,
// non-copyable.

// It will have the following functions:

// * void learnTargetType(ATarget*), teaches a target to the generator

// * void forgetTargetType(string const &), that makes the generator forget a
//   target type if it's known

// * ATarget* createTarget(string const &), that creates a target of the
//   specified type

#ifndef TARGEN_HPP
#define TARGEN_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator{

    private :
        std::vector<ATarget *> sps;
        
        TargetGenerator(const TargetGenerator&);
        TargetGenerator & operator=(const TargetGenerator&);
    
    public :
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
};

#endif
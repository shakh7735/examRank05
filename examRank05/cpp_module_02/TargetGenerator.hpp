#ifndef TARGETGEN_HPP
#define TARGETGEN_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ATarget.hpp"
class ATarget;

class TargetGenerator{

    private:
        std::vector<ATarget*> list;
        TargetGenerator(const TargetGenerator& );
        TargetGenerator & operator=(const TargetGenerator&);

    public:
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
};

#endif
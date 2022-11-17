#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    sps.clear();
}

void TargetGenerator::learnTargetType(ATarget * ptr)
{
    std::vector<ATarget*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getType() == ptr->getType())
        return;
    }
    sps.push_back(ptr->clone());
    
}

void TargetGenerator::forgetTargetType(std::string const &name)
{
    std::vector<ATarget*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getType() == name)
        {
            delete (*it);
            it= sps.erase(it);
            return ;
        }
    }
}

ATarget* TargetGenerator::createTarget(std::string const &name)
{
    std::vector<ATarget*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getType() == name)
        return (*it)->clone();
    }
    return NULL;
}

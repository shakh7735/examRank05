#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    for (std::vector<ATarget*>::iterator it = this->list.begin(); it != this->list.end(); ++it)
        	delete (*it);
	this->list.clear();
	// std::cout << "OK Target!\n";
}

void TargetGenerator::learnTargetType(ATarget* sp)
{
	if (!sp)
		return;
    for (std::vector<ATarget*>::iterator it = list.begin();it != list.end();++it)
		if ((*it)->getType() == sp->getType())
			return ;
	list.push_back(sp->clone());
}

void TargetGenerator::forgetTargetType(std::string const & name)
{
    for (std::vector<ATarget*>::iterator it = list.begin();it != list.end(); ++it)
	{
		if ((*it)->getType() == name)
		{
			delete (*it);
			it = this->list.erase(it);
		}
	}
}

ATarget* TargetGenerator::createTarget(std::string const & name)
{
    for (std::vector<ATarget*>::iterator it = list.begin(); it != list.end(); it++)
        if ((*it)->getType() == name)
            return (*it);
    return (NULL);
}
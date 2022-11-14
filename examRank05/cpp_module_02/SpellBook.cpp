#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
     for (std::vector<ASpell*>::iterator it = this->list.begin(); it != this->list.end(); ++it)
        	delete (*it);
	this->list.clear();
}

void SpellBook::learnSpell(const ASpell* sp)
{
	if (!sp)
		return;
    for (std::vector<ASpell*>::iterator it = list.begin();it != list.end();++it)
		if ((*it)->getName() == sp->getName())
			return ;
	this->list.push_back(sp->clone());
}

void SpellBook::forgetSpell(std::string const & name)
{
    for (std::vector<ASpell*>::iterator it = list.begin();it != list.end(); ++it)
	{
		if ((*it)->getName() == name)
		{
			delete (*it);
			it = this->list.erase(it);
		}
	}
}

ASpell* SpellBook::createSpell(std::string const & name)
{
    for (std::vector<ASpell*>::iterator it = list.begin(); it != list.end(); it++)
        if ((*it)->getName() == name)
            return (*it);
    return (NULL);
}
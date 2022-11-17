#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    sps.clear();
}

void SpellBook::learnSpell(ASpell * ptr)
{
    std::vector<ASpell*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getName() == ptr->getName())
        return;
    }
    sps.push_back(ptr->clone());
    
}

void SpellBook::forgetSpell(std::string const &name)
{
    std::vector<ASpell*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getName() == name)
        {
            delete (*it);
            it= sps.erase(it);
            return ;
        }
    }
}

ASpell* SpellBook::createSpell(std::string const &name)
{
    std::vector<ASpell*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getName() == name)
        return (*it)->clone();
    }
    return NULL;
}

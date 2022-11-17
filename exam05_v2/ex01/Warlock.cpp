#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string tit) : name(name), title(tit)
{
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!\n";
    sps.clear();
}

std::string Warlock::getName() const
{return name;}

std::string Warlock::getTitle() const
{return title;}

void Warlock::setTitle(std::string newTit)
{title = newTit;}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell * ptr)
{
    std::vector<ASpell*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getName() == ptr->getName())
        return;
    }
    sps.push_back(ptr->clone());
    
}

void Warlock::forgetSpell(std::string name)
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

void Warlock::launchSpell(std::string name, ATarget & ref)
{
    std::vector<ASpell*>::iterator it;
    for (it = sps.begin(); it != sps.end(); it++)
    {
       if ((*it)->getName() == name)
        {
            ref.getHitBySpell(*(*it));
            return ;
        }
    }
}
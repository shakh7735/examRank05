#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << GREEN << name << ": This looks like another boring day.\n" << DEF_COLOR;
}

Warlock::~Warlock()
{
    std::cout << RED << this->name << ": My job here is done!\n" << DEF_COLOR;
    this->list.clear();
}
        
const std::string& Warlock::getName() const
{ return this->name; }

const std::string& Warlock::getTitle() const
{ return this->title; }

void Warlock::setTitle(const std::string& title)
{
    this->title = title;
    this->introduce();
}

void Warlock::introduce() const
{
    std::cout << YELLOW << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl << DEF_COLOR;
}

void Warlock::learnSpell(const ASpell* sp)
{
    for (std::vector<ASpell*>::iterator it = list.begin();it != list.end();it++)
		if ((*(*it)).getName() == (*sp).getName())
			return ;
	list.push_back(sp->clone());
}

void Warlock::forgetSpell(std::string name)
{
    for (std::vector<ASpell*>::iterator it = list.begin();it != list.end();)
	{
		if ((*(*it)).getName() == name)
		{
			delete (*it);
			it = list.erase(it);
		}
		else
			it++;
	}
	
}

void Warlock::launchSpell(std::string name, ATarget& ref)
{
    for (std::vector<ASpell*>::iterator it = list.begin();it != list.end();it++)
	{
		if ((*(*it)).getName() == name)
		{
			(*(*it)).launch(ref);
			return ;
		}
	}
}
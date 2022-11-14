#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    this->book = new SpellBook;
    std::cout << GREEN << name << ": This looks like another boring day.\n" << DEF_COLOR;
}

Warlock::~Warlock()
{
    std::cout << RED << this->name << ": My job here is done!\n" << DEF_COLOR;
    delete (this->book);
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
    book->learnSpell(sp);
}

void Warlock::forgetSpell(std::string name)
{
    book->forgetSpell(name);
	
}

void Warlock::launchSpell(std::string name, ATarget& ref)
{
	ASpell *temp;

    temp = book->createSpell(name);
	if (!temp)
		return;
	temp->launch(ref);
}
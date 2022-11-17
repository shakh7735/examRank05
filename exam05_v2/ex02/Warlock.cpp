#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string tit) : name(name), title(tit)
{
    std::cout << name << ": This looks like another boring day.\n";
    book = new SpellBook;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!\n";
    delete book;
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
    book->learnSpell(ptr);
}

void Warlock::forgetSpell(std::string name)
{
    book->forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget & ref)
{
    ASpell *temp = book->createSpell(name);
    if (temp)
    {
        temp->launch(ref);
        delete temp;
    }
}
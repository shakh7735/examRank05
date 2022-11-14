#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
    std::cout << MAGENTA;
    std::cout << this->name << ": This looks like another boring day.\n";
    std::cout << DEF_COLOR;
}

Warlock::~Warlock()
{
    std::cout << RED;
    std::cout << this->name << ": My job here is done!\n";
    std::cout << DEF_COLOR;
}

std::string Warlock::getName() const
{ return (this->name); }

std::string Warlock::getTitle() const
{ return (this->title); }

void Warlock::setTitle(std::string title)
{ this->title = title; }

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!\n";
}
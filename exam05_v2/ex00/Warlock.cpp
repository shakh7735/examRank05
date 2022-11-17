#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string tit) : name(name), title(tit)
{
    std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!\n";
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
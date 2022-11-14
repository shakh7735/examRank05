#include "Dummy.hpp"

Dummy() : ATarget ("Target Practice Dummy")
{}

Dummy(std::string type) : ATarget (type)
{}

Dummy(const Dummy& ref) : ATarget (ref)
{
}

Dummy & operator=(const Dummy& ref)
{
    if (this != &src)
		*this = src;
	return (*this);
}

~Dummy()
{}

ATarget* clone() const
{
    return (new Dummy(*this));
}
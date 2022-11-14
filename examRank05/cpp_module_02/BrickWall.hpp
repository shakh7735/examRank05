#ifndef BRICK_HPP
#define BRICK_HPP

#include "ATarget.hpp"

class BrickWall: public ATarget
{
    public:
        BrickWall();
        BrickWall(std::string);
        BrickWall(const BrickWall& );
        BrickWall & operator=(const BrickWall&);
        virtual ~BrickWall();

        ATarget* clone() const;
};

#endif
#ifndef WARLOK_HPP
#define WARLOK_HPP

#include <iostream>
#include <string>

class Warlock{

    private :
        std::string name;
        std::string title;

        Warlock();
        Warlock(const Warlock&);
        Warlock & operator=(const Warlock&);
    
    public :
        Warlock(std::string, std::string);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;
        void setTitle(std::string);

        void introduce() const;

};

#endif
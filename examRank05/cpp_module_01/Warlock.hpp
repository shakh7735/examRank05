#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

// #Colors
#define DEF_COLOR	 "\033[0;39m"
#define GRAY		 "\033[0;90m"
#define RED			 "\033[0;91m"
#define GREEN		 "\033[0;92m"
#define YELLOW		 "\033[0;93m"
#define BLUE		 "\033[0;94m"
#define MAGENTA		 "\033[0;95m"
#define CYAN		 "\033[0;96m"
#define WHITE		 "\033[0;97m"

class Warlock{

    private :

        std::string name;
        std::string title;

        Warlock();
        Warlock(const Warlock &);
        Warlock &operator=(const Warlock &);

    public:
        Warlock(std::string, std::string);
        ~Warlock();

        std::string getName() const;
        std::string getTitle() const;

        void setTitle(std::string);
        void introduce() const;

};

#endif
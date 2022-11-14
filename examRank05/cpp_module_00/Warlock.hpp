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
    private:
        std::string name;
        std::string title;
        std::vector<ASpell*> list;
        
        Warlock();
        Warlock(const Warlock &src);
        Warlock &operator=(const Warlock &src);
    
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();
        
        const std::string &getName() const;
        const std::string &getTitle() const;
        
        void setTitle(const std::string& title);
        
        void introduce() const;
        
        void learnSpell(const ASpell* );
        void forgetSpell(std::string );
        void launchSpell(std::string , ATarget& );
};

#endif
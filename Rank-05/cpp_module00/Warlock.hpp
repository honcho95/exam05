#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
    public :
        ~Warlock();
        Warlock(std::string const &name, std::string const &title);
        const std::string& getName() const;
        const std::string& getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;

    private :
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);
        std::string _name;
        std::string _title;
};

#endif
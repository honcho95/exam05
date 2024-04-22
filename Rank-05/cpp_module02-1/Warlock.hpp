#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock{
    public:
        ~Warlock();
        Warlock(std::string const &name, std::string const &title);

        const std::string &getName() const;
        const std::string &getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &spell);
        void launchSpell(std::string const &spell, ATarget const & target);

    private:
        Warlock(Warlock const &obj);
        Warlock operator=(Warlock const &obj);
        std::string _name;
        std::string _title;
        std::vector<ASpell*> vspell;
        SpellBook sBook;



};

#endif
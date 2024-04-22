#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
public:
    virtual ~ASpell();
    ASpell(std::string const &name, std::string const &effects);
    virtual ASpell* clone() const = 0;

    ASpell (ASpell const &obj);
    ASpell &operator=(ASpell const &obj);

    const std::string &getName() const;
    const std::string getEffects() const;

    void launch(ATarget const &target) const;

private:
        std::string _name;
        std::string _effects;

};

#endif
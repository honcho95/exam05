#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
    public:
        virtual ~ATarget();
        ATarget(std::string const &name);
        virtual ATarget* clone() const = 0;

        ATarget (ATarget const &obj);
        ATarget &operator=(ATarget const &obj);

        const std::string &getType() const;

        void getHitBySpell(ASpell const &spell) const;

    private:
        std::string _type;
};

#endif
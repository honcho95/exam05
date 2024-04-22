#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public :
        virtual ~ATarget();
        ATarget(std::string const &type);
        std::string const &getType() const;
        virtual ATarget *clone() const = 0;

        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);

        void getHitBySpell(ASpell const &spell) const;

    private :
        std::string _type;

};

#endif
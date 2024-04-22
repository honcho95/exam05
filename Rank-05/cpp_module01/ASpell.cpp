#include "ASpell.hpp"

ASpell::~ASpell()
{

}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
    this->_name = name;
    this->_effects = effects;
}

ASpell::ASpell(ASpell const &other)
{
    *this = other;
}

ASpell &ASpell::operator=(ASpell const &other)
{
    this->_name = other._name;
    this->_effects = other._effects;
    return (*this);
}

const std::string& ASpell::getName() const
{
    return (this->_name);
}

const std::string ASpell::getEffects() const
{
    return (this->_effects);
}

void ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell(*this);
}
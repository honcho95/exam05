#include "ASpell.hpp"

ASpell::~ASpell() {}

ASpell::ASpell(std::string const & name, std::string const & effects){
    this->_name = name;
    this->_effects = effects;
}

ASpell::ASpell(ASpell const &obj){
    *this = obj;
}

ASpell &ASpell::operator=(ASpell const & obj){
    this->_name = obj._name;
    this->_effects = obj._effects;
    return(*this);
}

const std::string &ASpell::getName() const{
    return(this->_name);
}

const std::string ASpell::getEffects() const{
    return(this->_effects);
}

void ASpell::launch(ATarget const & target) const{
    target.getHitBySpell(*this);
}
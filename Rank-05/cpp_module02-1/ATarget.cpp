#include "ATarget.hpp"

ATarget::~ATarget() {}

ATarget::ATarget(std::string const &type)
{
    this->_type = type;
}

std::string const &ATarget::getType() const
{
    return this->_type;
}

ATarget::ATarget(ATarget const &obj)
{
    *this = obj;
}

ATarget &ATarget::operator=(ATarget 
const &obj)
{
    this->_type = obj._type;
    return(*this);
}

void ATarget::getHitBySpell(ASpell 
const &spell) const
{
    std::cout << this->getType() << 
        " has been " << spell.getEffects() << 
        "!" << std::endl;
}

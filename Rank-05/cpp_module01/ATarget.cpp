#include "ATarget.hpp"

ATarget::~ATarget()
{

}

ATarget::ATarget(std::string const &type)
{
    this->_type = type;
}

std::string const &ATarget::getType() const
{
    return this->_type;
}

ATarget::ATarget(ATarget const &other)
{
    *this = other;
}

ATarget &ATarget::operator=(ATarget const &other)
{
    this->_type = other._type;
    return (*this);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
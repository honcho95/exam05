#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const
{
    return (this->_name);
}

const std::string& Warlock::getTitle() const
{
    return (this->_title);
}

void Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}

void Warlock::introduce() const
{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    vecSpell.push_back(spell);
}

void Warlock::forgetSpell
(std::string spellName)
{
    if (spellName.empty())
        return;
    size_t i = 0;
    while (i < vecSpell.size())
    {
        if (spellName == 
            vecSpell[i]->getName())
            vecSpell.erase
                (vecSpell.begin() + i);
        i++;
    }
}

void Warlock::launchSpell
(std::string spellName, ATarget const &target)
{
    if (spellName.empty())
            return;
        size_t i = 0;
        while (i < vecSpell.size())
        {
            if (spellName == 
                vecSpell[i]->getName())
                vecSpell[i]->launch(target);
            i++;
        }
}

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
    if(spell)
        _spellbook.push_back(spell);
}

void SpellBook::forgetSpell(std::string const &spell){
    if(spell.empty())
        return;
    size_t i = 0;
    while(i < _spellbook.size())
    {
        if(spell == _spellbook[i]->getName())
            _spellbook.erase(_spellbook.begin() + i);
        i++;
    }
}

ASpell* SpellBook::createSpell(std::string const &spell)
{
    ASpell *pointeur = NULL;
    size_t i = 0;
    
    while(i < _spellbook.size())
    {
        if(spell == _spellbook[i]->getName())
            pointeur = _spellbook[i];
        i++;
    }
    return pointeur;
}
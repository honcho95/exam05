#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook{
public:    
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
private:
    SpellBook (SpellBook const &obj);
    SpellBook &operator=(SpellBook const &obj);
    std::vector<ASpell*> _spellbook;

};
#endif
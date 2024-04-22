#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if(target)
        map[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const & type){
    if(map.find(type) != map.end())
        map.erase(map.find(type));
}

ATarget *TargetGenerator::createTarget(std::string const &type){
    ATarget *pointeur = NULL;
    if(map.find(type) != map.end())
        pointeur = map[type];
    return pointeur;
}
#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
        
    private:
        TargetGenerator (TargetGenerator const &);
        TargetGenerator &operator=(TargetGenerator const &);
        std::map<std::string, ATarget*> map;

};
#endif
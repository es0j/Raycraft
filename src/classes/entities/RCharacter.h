#include "REntity.h"
#include <iostream>

using namespace RayCraft;

class RCharacter : public REntity
{
public:
    RCharacter() = delete;
    RCharacter(const char *sprites);
    //inline virtual void Update(float a) override{ std::cout <<"Rchar update" << std::endl;}
};
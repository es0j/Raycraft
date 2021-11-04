#include "RCharacter.h"

#include "components/RSprite.h"
#include "components/RTransform.h"
#include "scripts/MovementScript.h"

using namespace RayCraft;

RCharacter::RCharacter(const char *sprites){
    AddComponent<RSprite>(sprites,5);
    AddComponent<RTransform>();
    AddComponent<MovementScript>();
}
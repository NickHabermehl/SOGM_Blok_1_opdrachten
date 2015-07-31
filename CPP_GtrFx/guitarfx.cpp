#include "amplifier.h"
#include "flanger.h"
#include "tremolo.h"

using namespace std;

int main()
{
    Amplifier* effects[5];
    
    effects[0] = new Amplifier;
    effects[1] = new Flanger;
    effects[2] = new Tremolo;
    
    for (int i=0; i<3; i++)
    {
        effects[i] -> process();
    }
    
    for (int i=0; i<3; i++)
    {
        delete effects[i];
    }
    
    return 0;
    
}
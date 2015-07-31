#include "amplifier.h"

using namespace std;

class Flanger : public Amplifier
{
public:
    Flanger();
    
    void process();
    
    void set_FlangeDepth(float newFlangeDepth);
    void set_FlangeRate(float newFlangeRate);
    
    void get_FlangerSettings();
    
private:
    float flangeDepth;
    float flangeRate;
};
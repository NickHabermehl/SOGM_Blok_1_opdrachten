#include "amplifier.h"

using namespace std;

class Tremolo : public Amplifier
{
public:
    Tremolo();
    
    void process();
    
    void set_TremDepth(float newTremDepth);
    void set_TremSpeed(float newTremSpeed);
    
    void get_TremoloSettings();
    
private:
    float tremDepth;
    float tremSpeed;
};
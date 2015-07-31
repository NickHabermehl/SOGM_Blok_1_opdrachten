#include "tremolo.h"
#include <iostream>

using namespace std;

Tremolo::Tremolo()
{
    this->tremDepth = 0.5;
    this->tremSpeed = 5;
}


void Tremolo::process()
{
    cout << "process() function from Tremolo" << endl;
}


void Tremolo::set_TremDepth(float newTremDepth)
{
    tremDepth = newTremDepth;
    
    cout << "set_TremDepth: " << tremDepth << endl;
}


void Tremolo::set_TremSpeed(float newTremSpeed)
{
    tremSpeed = newTremSpeed;
    
    cout << "set_TremSpeed: " << tremSpeed << endl;
}

void Tremolo::get_TremoloSettings()
{
    cout << endl;
    cout << "TREMOLO SETTINGS" << endl;
    cout << "Tremolo Depth: " << tremDepth << endl;
    cout << "Tremolo Speed: " << tremSpeed << endl;
    cout << endl;
}
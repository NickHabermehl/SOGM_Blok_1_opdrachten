#include "flanger.h"
#include <iostream>

using namespace std;

Flanger::Flanger()
{
    this->flangeDepth = 0.5;
    this->flangeRate = 2;
}


void Flanger::process()
{
    cout << "process() function from Flanger" << endl;
}


void Flanger::set_FlangeDepth(float newFlangeDepth)
{
    flangeDepth = newFlangeDepth;
    
    cout << "set_Depth: " << flangeDepth << endl;
}


void Flanger::set_FlangeRate(float newFlangeRate)
{
    flangeRate = newFlangeRate;
    
    cout << "set_Rate: " << flangeRate << endl;
}


void Flanger::get_FlangerSettings()
{
    cout << endl;
    cout << "FLANGER SETTINGS" << endl;
    cout << "Depth: " << flangeDepth << endl;
    cout << "Rate: " << flangeRate << endl;
    cout << endl;
}
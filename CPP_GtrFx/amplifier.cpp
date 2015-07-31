#include "amplifier.h"
#include <iostream> 
#include <math.h> 

using namespace std;

Amplifier::Amplifier()
{
    this->gainDB = -12;
    this->gainLevel = 1;
    this->sampleRate = 44100;
    this->channels = 2;
    this->numFrames = 1000000;
    this->vectorSize = 512;
    this->bufferSize = 1024;
}


void Amplifier::read_samples()
{
    cout << "read_samples() function" << endl;
}


void Amplifier::process()
{
    cout << "process() function from Amplifier" << endl;
}


void Amplifier::write_samples()
{
    cout << "write_samples() function" << endl;
}


void Amplifier::show_level()
{
    cout << "show_level() function" << endl;
}


void Amplifier::set_GainLevel(float gainDB)
{
    gainLevel = pow (10, (gainDB/20));
    
    cout << "set_GainLevel: " << gainLevel << endl;
}


void Amplifier::set_SampleRate(unsigned int newSampleRate)
{
    sampleRate = newSampleRate;

    cout << "set_SampleRate: " << sampleRate << endl;
}


void Amplifier::set_Channels(unsigned short newChannels)
{
    channels = newChannels;
    
    cout << "set_Channels: " << channels << endl;
}


void Amplifier::set_NumFrames(unsigned long int newNumFrames)
{
    numFrames = newNumFrames;
    
    cout << "set_NumFrames: " << numFrames << endl;
}


void Amplifier::set_VectorSize(unsigned short newVectorSize)
{
    vectorSize = newVectorSize;
    
    cout << "set_VectorSize: " << vectorSize << endl;
}


void Amplifier::set_BufferSize()
{
    bufferSize = vectorSize * channels;
    
    cout << "set_BufferSize: " << bufferSize << endl;
}


void Amplifier::get_AmplifierSettings()
{
    cout << endl;
    cout << "AMPLIFIER SETTINGS" << endl;
    cout << "Gain in dB: " << gainDB << endl;
    cout << "GainLevel: " << gainLevel << endl;
    cout << "Samplerate: " << sampleRate << endl;
    cout << "Channels: " << channels << endl;
    cout << "Number of Frames: " << numFrames << endl;
    cout << "Vectorsize: " << vectorSize << endl;
    cout << "Buffersize: " << bufferSize << endl;
    cout << endl;
}
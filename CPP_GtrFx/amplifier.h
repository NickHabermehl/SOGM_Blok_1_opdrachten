#pragma once

#include <string>

using namespace std;

class Amplifier
{
public:
    Amplifier();
    virtual void process();
    
    void read_samples();
    void write_samples();
    void show_level();
    
    void set_GainLevel(float gainDB);
    void set_SampleRate(unsigned int newSampleRate);
    void set_Channels(unsigned short newChannels);
    void set_NumFrames(unsigned long int newNumFrames);
    void set_VectorSize(unsigned short newVectorSize);
    void set_BufferSize();
    
    void get_AmplifierSettings();
    
protected:
    float gainDB;
    double gainLevel;
    unsigned int sampleRate;
    unsigned short channels;
    unsigned long int numFrames;
    unsigned short vectorSize;
    unsigned int bufferSize;
};
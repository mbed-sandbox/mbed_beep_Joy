#pragma once

#include "mbed.h"

class Buzzer
{   
    private:
    DigitalOut buzz;
    Timeout timeOn;
    Timeout timeOff;
    Timeout timeOn2;
    Timeout timeOff2;
    Timeout timeOn3;
    Timeout timeOff3;
    
    void buzz_on_inter()
    {
        buzz = 0;
    }
    
    void buzz_off_inter()
    {
        buzz = 1;
    }
    
    public:
    Buzzer (PinName pin) : buzz(pin)
    {
        buzz = 0;
    }
    
    void beep_once()
    {
        timeOn.attach(this, &Buzzer::buzz_on_inter, 0.1);
        timeOff.attach(this, &Buzzer::buzz_off_inter, 0.3);
    }
    
    void beep_twice()
    {
        timeOn.attach(this, &Buzzer::buzz_on_inter, 0.1);
        timeOff.attach(this, &Buzzer::buzz_off_inter, 0.2);
        timeOn2.attach(this, &Buzzer::buzz_on_inter, 0.3);
        timeOff2.attach(this, &Buzzer::buzz_off_inter, 0.4);
    }
    
    void beep_thrice()
    {
        timeOn.attach(this, &Buzzer::buzz_on_inter, 0.1);
        timeOff.attach(this, &Buzzer::buzz_off_inter, 0.2);
        timeOn2.attach(this, &Buzzer::buzz_on_inter, 0.3);
        timeOff2.attach(this, &Buzzer::buzz_off_inter, 0.4);
        timeOn3.attach(this, &Buzzer::buzz_on_inter, 0.5);
        timeOff3.attach(this, &Buzzer::buzz_off_inter, 0.6);
    }
    
    void long_beep()
    {
        timeOn.attach(this, &Buzzer::buzz_on_inter, 0.1);
        timeOff.attach(this, &Buzzer::buzz_off_inter, 0.7);
    }
};

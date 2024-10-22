#pragma once
#include"Device.h"
#include <iostream>
#include <string>

using namespace std;

class Keyboard : protected Device
{
public:
    string layout;
    bool isMechanical;
    int numKeys;


    Keyboard(string n, string b, int y, string dV, string sT, bool iC, int pU, string dT, int maxPower, string& desc, string l, bool m, int keys);


    void displayKeyboardInfo();
    void displayStatus();

    ~Keyboard();
protected:
    void printDeviceStatus();
};


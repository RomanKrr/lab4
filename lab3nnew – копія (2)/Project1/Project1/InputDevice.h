#pragma once
#include <string>

class InputDevice {
public:
    InputDevice();

    void connect();
    void disconnect();

    ~InputDevice();
};

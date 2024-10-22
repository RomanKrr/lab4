#include"Device.h"
#include"HardDrive.h"
#include"Computer.h"
#include"Keyboard.h"
#include"Mouse.h"
#include <fstream>
#include <iostream> 

using namespace std;

void calculateAnnualPowerUsage(const Device& device) {
    int hoursPerDay = 15;
    int daysPerYear = 365;
    int annualUsage = device.calculatePowerUsage(hoursPerDay * daysPerYear);

    cout << "Annual Power Usage for " << device.name << ": " << annualUsage << "W" << endl;

}

// 6 punkt reload f
void calculateAnnualPowerUsage(Device* device) {
    if (device == nullptr) {
        cout << "Invalid device pointer." << endl;
        return;
    }

    int hoursPerDay = 24;
    int daysPerYear = 365;
    int annualUsage = device->calculatePowerUsage(hoursPerDay * daysPerYear);

    cout << "Annual Power Usage for " << device->name << ": " << annualUsage << "W" << endl;
}

int main() {
    
	string deviceDesc = "High-resolution display";//2
	Device device1("Monitor", "LG", 2020, "1.0", "Working", true, 30, "Display", 150, deviceDesc);
	//device1.displayInfo();
	HardDrive hardDrive(1000, "Crucial", "MX500", 560, 510, true, "SATA III", 7200);
	//hardDrive.displayInfo();

    
    Device device2(device1);//1

    calculateAnnualPowerUsage(device1);// 5- 6 
    calculateAnnualPowerUsage(&device1);// 5- 6 

    Device changedDevice = device1.changeName(device1);//7
    cout << endl;
    //cout << "Changed device name to: " << changedDevice.name << endl;
    cout << endl;

    Device simpleConst;//8 
    //simpleConst.displayInfo();
    Device scorochenConst("Roman", "Scoro");//8


    //9
    Device* d1 = new Device("Speaker", "Bose", 2020, "1.0", "Working", true, 15, "Output", 150, deviceDesc);
    //scorochenConst.displayInfo();


    //11
    Computer myComputer(device1, hardDrive);
    myComputer.connectDevice(device1);

    //12 
    myComputer.addDevice(device1);
    myComputer.addDevice(device2);

    myComputer.showDevices();

    //13
    //myComputer.displaySystemInfo();


    //agreg ?? ???????? 
    // ???????? ??? ?????????? 
    //??????? 
    Computer myComputer1(device1, hardDrive);

    //Device::showDeviceCount(); //4


    // 4 laba

    Mouse *myMouse = new Mouse("Mouse", "Logitech", 2024, "1.0", "Working", 16000, true);//5 and 7.2
    //myMouse.displayMouseInfo();
    delete myMouse;
    cin.get();

    // 7.2
    string description = "Some txt";
    Keyboard myKeyboard("Keyboard", "Logitech", 2024, "1.0", "Working", true, 50, "Input Device", 100, description, "QWERTY", true, 104);
    myKeyboard.displayKeyboardInfo();

	return 0;
}
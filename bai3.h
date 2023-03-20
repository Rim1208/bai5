#include <iostream>
using namespace std;

class Temperature {
private:
    float temp;

public:
    Temperature(float t) {
        temp = t;
    }

    bool isEthylFreezing() {
        return temp <= -173;
    }

    bool isEthylBoiling() {
        return temp >= 172;
    }

    bool isOxygenFreezing() {
        return temp <= -362;
    }

    bool isOxygenBoiling() {
        return temp >= -306;
    }

    bool isWaterFreezing() {
        return temp <= 32;
    }

    bool isWaterBoiling() {
        return temp >= 212;
    }
};
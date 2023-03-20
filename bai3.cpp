#include <iostream>
#include "bai3.h"
using namespace std;

int main() {
    float temp;
    cout << "Enter a temperature: ";
    cin >> temp;

    Temperature t(temp);

    bool ethylFreezing = t.isEthylFreezing();
    bool ethylBoiling = t.isEthylBoiling();
    bool oxygenFreezing = t.isOxygenFreezing();
    bool oxygenBoiling = t.isOxygenBoiling();
    bool waterFreezing = t.isWaterFreezing();
    bool waterBoiling = t.isWaterBoiling();

    cout << "Substances that will freeze at " << temp << " degrees: ";
    if (ethylFreezing) {
        cout << "Ethyl alcohol ";
    }
    if (oxygenFreezing) {
        cout << "Oxygen ";
    }
    if (waterFreezing) {
        cout << "Water";
    }
    cout << endl;

    cout << "Substances that will boil at " << temp << " degrees: ";
    if (ethylBoiling) {
        cout << "Ethyl alcohol ";
    }
    if (oxygenBoiling) {
        cout << "Oxygen ";
    }
    if (waterBoiling) {
        cout << "Water";
    }
    cout << endl;

    return 0;
}
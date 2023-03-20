#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin {
    private:
        string sideUp;
    public:
        Coin() {
            srand(time(0));
            int random = rand() % 2;
            if (random == 0) {
                sideUp = "heads";
            } else {
                sideUp = "tails";
            }
        }
        void toss() {
            int random = rand() % 2;
            if (random == 0) {
                sideUp = "heads";
            } else {
                sideUp = "tails";
            }
        }
        string getSideUp() { return sideUp; }
};

int main() {
    Coin coin;
    cout << "Initial side up: " << coin.getSideUp() << endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++) {
        coin.toss();
        cout << "Side up after toss " << i+1 << ": " << coin.getSideUp() << endl;
        if (coin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
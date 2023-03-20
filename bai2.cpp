#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Coin {
public:
    Coin();
    void toss();
    std::string getSideUp() const;
private:
    std::string sideUp;
};

Coin::Coin() {
    // Initialize random seed
    std::srand(std::time(nullptr));
    // Randomly set sideUp to "heads" or "tails"
    int random = std::rand() % 2;
    if (random == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

void Coin::toss() {
    // Randomly set sideUp to "heads" or "tails"
    int random = std::rand() % 2;
    if (random == 0) {
        sideUp = "heads";
    } else {
        sideUp = "tails";
    }
}

std::string Coin::getSideUp() const {
    return sideUp;
}

int main() {
    // Create a Coin object
    Coin myCoin;
    // Display the initial side that is facing up
    std::cout << "Initial side: " << myCoin.getSideUp() << std::endl;
    // Toss the coin 20 times and display the side that is facing up each time
    int headsCount = 0;
    int tailsCount = 0;
    for (int i = 0; i < 20; i++) {
        myCoin.toss();
        std::cout << "Toss " << i+1 << ": " << myCoin.getSideUp() << std::endl;
        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }
    // Display the number of times heads and tails were facing up
    std::cout << "Heads count: " << headsCount << std::endl;
    std::cout << "Tails count: " << tailsCount << std::endl;
    return 0;
}
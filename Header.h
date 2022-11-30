#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




enum taste {
    SWEET,
    SOUR,
    NEUTRAL
};


class Fruit {
private:
    string name;
    string color;
    taste TASTE;

public:
    Fruit(string NAME, string COLOR, taste TASTE) {
        name = NAME;
        color = COLOR;
        this->TASTE = TASTE;
    }
    void out_Fruit()
    {
        cout << "Name fruit: " << name << endl
            << "Color fruit: " << color << endl
            << "Taste fruit: " << TASTE << endl;

    }
    string getName() {
        return name;
    }
    string getColor() {
        return color;
    }
    taste getTaste() {
        return TASTE;
    }
}; #pragma once

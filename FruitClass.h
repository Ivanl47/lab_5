#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

enum Taste {
    SWEET,
    SOUR,
    NEUTRAL
};

class Fruit {
private:
    string name_of_fruit_;
    string color_of_fruit_;
    Taste TASTE;

public:
    Fruit(string NAME, string COLOR, Taste TASTE) {
        name_of_fruit_ = NAME;
        color_of_fruit_ = COLOR;
        this->TASTE = TASTE;
    }
    void OutFruit()
    {
        cout << "Name fruit: " << name_of_fruit_ << endl
            << "Color fruit: " << color_of_fruit_ << endl
            << "Taste fruit: " << TASTE << endl;

    }
    string getFruitName() {
        return name_of_fruit_;
    }
    string getFruitColor() {
        return color_of_fruit_;
    }
    Taste getFruitTaste() {
        return TASTE;
    }
};

#include <iostream>
#include"FruitClass.h" 
#include <vector>
#include <algorithm>#
using namespace std;

class FruitSalad {
private:
    string fruit_salad_name_;
    Taste TOPPING;
    vector <Fruit> fruit_in_salad;
public:
    FruitSalad(string fruitSalad_Name) {
        this->fruit_salad_name_ = fruitSalad_Name;
    }

    void AddFruit(Fruit fruit)
    {
        fruit_in_salad.push_back(fruit);
    }

    void out_salat_ingredients() {

        for (int i = 0; i < fruit_in_salad.size(); i++) {
            cout << fruit_in_salad[i].getFruitName() << " ";
        }
        cout << endl;
    }

    void setTopping() {
        int ToppingNamer = 0;

        for (int j = 0; j < fruit_in_salad.size(); j++) {
            ToppingNamer += fruit_in_salad[j].getFruitTaste();
        }
        ToppingNamer = ToppingNamer / fruit_in_salad.size();

        if (ToppingNamer == 0) {
            TOPPING = SWEET;
        }
        if (ToppingNamer == 1) {
            TOPPING = SOUR;
        }
        if (ToppingNamer == 2) {
            TOPPING = NEUTRAL;
        }
    }
    Taste getToping() {
        return TOPPING;
    }
    void shufle()
    {
        random_shuffle(fruit_in_salad.begin(), fruit_in_salad.end());
    };

};
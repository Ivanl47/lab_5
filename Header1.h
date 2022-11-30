#include <iostream>
#include"Header.h" 
#include <vector>
#include <algorithm>#
using namespace std;



class FruitSalad {
private:
    string fruitSalad_Name;
    taste TOPPING;
    vector <Fruit> fruit_in_salad;
public:
    FruitSalad(string fruitSalad_Name) {
        this->fruitSalad_Name = fruitSalad_Name;
    }

    void Add(Fruit fruit)
    {
        fruit_in_salad.push_back(fruit);
    }

    void out_salat_ing() {

        for (int i = 0; i < fruit_in_salad.size(); i++) {
            cout << fruit_in_salad[i].getName() << " ";
        }
        cout << endl;
    }

    void setTopping() {
        int r = 0;

        for (int j = 0; j < fruit_in_salad.size(); j++) {
            r += fruit_in_salad[j].getTaste();
        }
        r = r / fruit_in_salad.size();

        if (r == 0) {
            TOPPING = SWEET;
        }
        if (r == 1) {
            TOPPING = SOUR;
        }
        if (r == 2) {
            TOPPING = NEUTRAL;
        }
    }
    taste getToping() {
        return TOPPING;
    }
    void shufle()
    {
        random_shuffle(fruit_in_salad.begin(), fruit_in_salad.end());
    };

};
#include <iostream>
#include <vector>
#include <algorithm>
#include "FruitSaladClass.h"

using namespace std;

int main()
{
    Fruit yiabluko("YABKO", "RED", NEUTRAL);
    Fruit student("STUDENT", " BLUE ", NEUTRAL);
    Fruit ogirok("CUCUMBER", "GREAN", NEUTRAL);
    FruitSalad salat("Solianka");
    salat.AddFruit(yiabluko);
    salat.AddFruit(student);
    salat.AddFruit(ogirok);
    salat.out_salat_ingredients();
    cout << salat.getToping() << endl;
    salat.shufle();
    salat.setTopping();

    salat.shufle();
    salat.out_salat_ingredients();
    cout << salat.getToping() << endl;

    salat.shufle();
    salat.out_salat_ingredients();
    cout << salat.getToping() << endl;

    string toping_swap;

    if (salat.getToping() == 0) {
        toping_swap = "sweet";

    }
    if (salat.getToping() == 1) {
        toping_swap = "sour";
    }

    if (salat.getToping() == 2) {
        toping_swap = "neutral";
    }

    
    cout << toping_swap << endl;
    return 0;

}
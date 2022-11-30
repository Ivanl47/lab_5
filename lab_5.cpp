/*Створити клас Fruit (name, size, color, taste(SWEET, SOUR, NEUTRAL), etc).
 * Додати enum Topping, який також має поле taste (SWEET, SOUR, NEUTRAL).
 * Створити клас FruitSalad, який складається з набору фруктів і певного топінгу (можна використати enum).
 * Реалізувати метод для вибору топінгу, який залежить від смаку інгредієнтів (на свій смак)).
 * Реалізувати метод для перемішування інгредієнтів.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include "Header1.h"

using namespace std;






int main()
{
    Fruit Yiabluko("YABKO", "RED", NEUTRAL);
    Fruit student("STUDENT", " BLUE ", NEUTRAL);
    Fruit ogirok("CUCUMBER", "GREAN", NEUTRAL);
    FruitSalad salat("Solianka");
    salat.Add(Yiabluko);
    salat.Add(student);
    salat.Add(ogirok);
    salat.out_salat_ing();
    cout << salat.getToping() << endl;
    salat.shufle();
    salat.setTopping();

    salat.shufle();
    salat.out_salat_ing();
    cout << salat.getToping() << endl;

    salat.shufle();
    salat.out_salat_ing();
    cout << salat.getToping() << endl;

    string TopingSwap;

    if (salat.getToping() == 0) {
        TopingSwap = "sweet";

    }
    if (salat.getToping() == 1) {
        TopingSwap = "sour";
    }

    if (salat.getToping() == 2) {
        TopingSwap = "neutral";
    }

    /*salat.shufle();
    salat.out_salat_ing();
    cout << salat.getToping() << endl;
    return 0;*/
    cout << TopingSwap << endl;
    return 0;

}
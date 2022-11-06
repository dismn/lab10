/*Copyright(C) 2022, Semeniuta Diana 202-TH 
1. Визначте абстрактний клас трикутників і дві його реалізації: за трьома вершинами і за трьома сторонами.
2. Доповніть клас трикутників конструктором за основами його трьох медіан. Реалізуйте метод обчислення довільної медіани трикутника.
3. За довільною стороною трикутника знайдіть паралельну їй середню лінію.
4. Визначте ієрархію трикутник-прямокутний трикутник. Реалізуйте функції обчислення довжин радіусів вписаного і описаного кіл. */

#include <Windows.h>
#include <iostream>
#include "Triangle2.h"
#include "Triangle.h"
#include "sides.h"
#include "apex.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle* three_sides = new Sides();
    three_sides->Read();
    three_sides->Computation();

    Triangle* three_apex = new Apex();
    three_apex->Read();
    three_apex->Computation();

    Triangle* prtr = new Triangle2();
    prtr->Read();
    prtr->Computation();

    return 0;
}
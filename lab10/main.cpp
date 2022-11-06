/*Copyright(C) 2022, Semeniuta Diana 202-TH 
1. �������� ����������� ���� ���������� � �� ���� ���������: �� ������ ��������� � �� ������ ���������.
2. �������� ���� ���������� ������������� �� �������� ���� ����� �����. ��������� ����� ���������� ������� ������ ����������.
3. �� �������� �������� ���������� ������� ���������� �� ������� ���.
4. �������� �������� ���������-����������� ���������. ��������� ������� ���������� ������ ������ ��������� � ��������� ��. */

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
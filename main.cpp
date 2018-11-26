// Технологии программирования: Лабораторная работа №2

//#include "WORD.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    stringstream ss;
    string str;
    string buff;
    ifstream fin;
    fin.open("test.txt");
    try
    {
        if (!fin.is_open())
            throw 101;
    }
    catch(int error)
    {
        cout << "Файла с таким именем не существует в директории!" << endl;
        return 101;
    }
    while (!fin.eof())
    {
        getline(fin, str);
        ss << str;
        while (ss >> buff)
        {
            cout << buff << "_";
        }
        cout << endl;
        ss.clear();
    }
    fin.close();
    return 0;
}

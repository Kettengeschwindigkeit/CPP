#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    // Урок #7. Ввод данных. Cin. Пример. Синтаксис.

    int Var, Var2, Var3, Var4;

    cout << "Введите первое число: ";
    cin >> Var;

    cout << "Введите второе число: ";
    cin >> Var2;

    cout << "Число 1 = " << Var << endl << "Число 2 = " << Var2 << endl;

    cout << "Введите два числа: ";
    cin >> Var3 >> Var4;

    cout << "Число 3 = " << Var3 << endl << "Число 4 = " << Var4 << endl;

    /* Урок #6. Константы. Ключевое слово const.
    
    const int COUNT_DAYS_IN_WEEK = 7;

    const char NEW_LINE = '\n';
    const char TAB = '\t';

    cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

    */
}

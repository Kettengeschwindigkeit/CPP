#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    // ���� #7. ���� ������. Cin. ������. ���������.

    int Var, Var2, Var3, Var4;

    cout << "������� ������ �����: ";
    cin >> Var;

    cout << "������� ������ �����: ";
    cin >> Var2;

    cout << "����� 1 = " << Var << endl << "����� 2 = " << Var2 << endl;

    cout << "������� ��� �����: ";
    cin >> Var3 >> Var4;

    cout << "����� 3 = " << Var3 << endl << "����� 4 = " << Var4 << endl;

    /* ���� #6. ���������. �������� ����� const.
    
    const int COUNT_DAYS_IN_WEEK = 7;

    const char NEW_LINE = '\n';
    const char TAB = '\t';

    cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

    */
}

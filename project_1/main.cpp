#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    // ���� #10. ����������� �������������� ����� +=, -= � �.�.

    /*
    
    int a = 0;

    cout << a << endl;

    a = a + 20;
    cout << a << endl;

    a += 20;
    cout << a << endl;

    a -= 10;
    cout << a << endl;

    a *= 2;
    cout << a << endl;

    a /= 5;
    cout << a << endl;
    
    */


    // ���� #9. ��������� � ���������. ����������� � ����������.

    /*
    
    int a = 1, b = 1, c = 1, d, e = 1, f;

    cout << a << endl;

    a = a + 1;
    cout << a << endl;

    a++;
    cout << a << endl;

    a--;
    cout << a << endl;

    cout << b++ << endl;
    cout << ++b << endl;

    d = ++c * c;
    cout << "d = " << d << endl;
    cout << "c = " << c << endl;

    f = ++e * e++;
    cout << "f = " << f << endl;
    cout << "e = " << e << endl;

    */


    // Homework #01. ������ ��� ����� � ������� �������� �� �����, ������������ � �������� ���������������.

    /*
    
    int a, b, c;

    cout << "������� ������ �����: ";
    cin >> a;

    cout << "������� ������ �����: ";
    cin >> b;

    cout << "������� ������ �����: ";
    cin >> c;

    cout << "�����: " << a + b + c << endl;
    cout << "������������: " << a * b * c << endl;
    cout << "������� ��������������: " << (double)(a + b + c) / 3 << endl;

    */

 
    // ���� #8. ���������. �������������� �������� � �������. --------------------------------------------------------------------------------------------------------------------------

    /*
    
    int a = 5;

    cout << a << endl;

    a = -a;

    cout << a << endl;

    int b = 5, c = 2, d, e, f;

    d = b + c;
    e = 2 + 2 * 2;
    f = (2 + 2) * 2;

    cout << d << endl;
    cout << a * b << endl;
    cout << e << endl;
    cout << f << endl;
    
    */


    // ���� #7. ���� ������. Cin. ������. ���������. -----------------------------------------------------------------------------------------------------------------------------------

    /*
    
    int Var, Var2, Var3, Var4;

    cout << "������� ������ �����: ";
    cin >> Var;

    cout << "������� ������ �����: ";
    cin >> Var2;

    cout << "����� 1 = " << Var << endl << "����� 2 = " << Var2 << endl;

    cout << "������� ��� �����: ";
    cin >> Var3 >> Var4;

    cout << "����� 3 = " << Var3 << endl << "����� 4 = " << Var4 << endl;
    
    */


    // ���� #6. ���������. �������� ����� const. ---------------------------------------------------------------------------------------------------------------------------------------
    
    /*
    
    const int COUNT_DAYS_IN_WEEK = 7;

    const char NEW_LINE = '\n';
    const char TAB = '\t';

    cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

    */


    // ���� #5. ����������. ������� ����������. ������� ������������. ------------------------------------------------------------------------------------------------------------------

    /*
    
    ���������� - ��� ������� ����������� ������, ���������� ����������� ������ � ��������������� ��� �������� ������ ������ �����, ������� ����� ���� ��������.

    int a;
	a = 5;

	int b = 7;

	cout << a << endl;
	cout << b << endl;

	a = 10;

	cout << a << endl;

	int Age, c, d, e = 6565;

	Age = 10;
	c = 1;
	d = 2;

	cout << Age << " " << c << " " << d << " " << e << endl;

	double f = 1.1551;
	char g = 'g';

	cout << f << " " << g << endl;

	bool h = true;
	bool i = false;

	cout << h << " " << i << endl;

    */


    // ���� #4. ���� ������.

    /*
    
    ���		������ � ������		���������											�������� ��������
	float	4					��������� ������������ ����� ��������� ��������
	double	8					��������� ������������ ����� ������� ��������
	int		4					��������� ����� �����								�� -2147483648 �� 2147483647
	short	2					��������� �������� ����� �����						�� -32768 �� 32767
	long	4					��������� ������� ����� �����						�� -2147483648 �� 2147483647
	char	1					��������� �������
	bool	1					��������� ���������� ��������

    */


    // Homework #00. ������� ����������������� ������ ����� ��� ������������� (� ��������� �� ����� ������, � ������ ������� ����� ��������������� � �.�.)

    /*
    
    cout << "I gotta flag and a picture of Robert E. Lee\nHangin' in the den for everyone to see\nI got a 68 long bed \"GMC\"\nSittin' out back underneath a tree\n";
	cout << "Every-day I'm tired cause I work really hard\nAt 5 o'clock I punch my time card\nSo when I get home I don't pay no re-gard\nTo the junk that's pilin' up in my back-yard\n\n";
	cout << "\tWell you can wash The \"Dukes of Hazzard\" sheets on my bed\n\tYou can wash the dust off of my stuffed deer head\n\tYou can wash my mud tires 'til there's no tread\n\tBut you can't wash the red outta my redneck\n";
    
    */

    // ���� #3. Escape-������������������. ��� ������������.

    /*
    
    \n - ������� �� ������ ����� ������
	\t - ������� � ��������� ������� ���������
	\b - �������� ���������� ����������� �������
	\\ - ������� �������� ����� �����
	\" - ������� ������� �������
	\' - ������� ��������� �������

    cout << "�����\n";
    cout << "\t\t�����\n\n\t\n";
    cout << "\"�����\"\\\n";
    
    */
}

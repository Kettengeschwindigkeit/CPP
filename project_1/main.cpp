#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    // ���� #16. ���� for. ��� ���. ��� ������. ������. ���������.

    for (int i = 0; i < 10; i++)
    {
        cout << "���������� i = " << i << endl;
    }

    // Homework #05. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� �������������. ---------------------------------------------------------

    /*
    
    int from, to, sum = 0;

    cout << "������� ������ ���������" << endl;
    cin >> from;

    cout << "������� ����� ���������" << endl;
    cin >> to;

    while (from <= to)
    {
        if (from % 2 != 0)
        {
            sum += from;
        }
        from++;
    }

    cout << sum << endl;
    
    */


    // Homework #04. ����������� ���������, ������� ������� �� ����� ����� �� ��������. ����� ��������, ����� ������ ������������, � ����� ����� ����� - ������������ ���
    // �������������� - ��������� ������������. ----------------------------------------------------------------------------------------------------------------------------------------

    /*
    
    char symbl;
    int num, type;

    cout << "������� ������: ";
    cin >> symbl;
    
    cout << "������� ���������� �������� � ������: ";
    cin >> num;

    cout << "����� ����� ������?" << endl << "1 - ������������" << endl << "2 - ��������������" << endl;
    cin >> type;

    switch (type)
    {
        case 1:
            while (num > 0)
            {
                cout << symbl << endl;
                num--;
            }
            break;
        case 2:
            while (num > 0)
            {
                cout << symbl;
                num--;
            }
            break;
        default:
            cout << "�������� 1 ��� 2!";
            break;
    }
    
    */

    
    // ���� #15. �����. ���� do while. ��� ���. ��� ������. ������. --------------------------------------------------------------------------------------------------------------------

    /*
    
    int a = 18;

    do
    {
        cout << "���������� a = " << a << endl;
        a++;
    } while (a < 20);
    
    */


    // ���� #14. �����. ���� while. ��� ���. ��� ������. ������. -----------------------------------------------------------------------------------------------------------------------

    /*
    
    int a = 0;

    while (a < 10)
    {
        cout << "���������� a = " << a << endl;
        a++;
    
    
    */


    // Homework #03. �������� ������� �����������. ������������ ������ ��� �����. ������� ���� � ������� ��� �������������� �������� ��������, ���������, ���������, �������. �����
    // �������� switch ����������� �������������� ��������, ��������������� ������ ����. -----------------------------------------------------------------------------------------------

    /*
    
    int num1, num2, operation;

    cout << "������� ������ �����: ";
    cin >> num1;

    cout << "������� ������ �����: ";
    cin >> num2;

    cout << "�������� ��������" << endl;
    cout << "1 - �������" << endl << "2 - �������" << endl << "3 - ��������" << endl << "4 - ���������" << endl;

    cin >> operation;

    switch (operation)
    {
        case 1:
            cout << num1 + num2 << endl;
            break;
        case 2:
            cout << num1 - num2 << endl;
            break;
        case 3:
            cout << num1 * num2 << endl;
            break;
        case 4:
            cout << (float)num1 / num2 << endl;
            break;
        default:
            cout << "������! ����� ����� �����������!" << endl;
            break;
    }
    
    */


    // ���� #13. Switch. ��� ���. ������. ���������. -----------------------------------------------------------------------------------------------------------------------------------

    /*
    
    int a;
    cin >> a;

    switch (a)
    {
        case 1:
            cout << "�� ����� 1" << endl;
            break;
        case 2:
            cout << "�� ����� 2" << endl;
            break;
        default:
            cout << "� �� ���� ����� �����!" << endl;
            break;
    }

    int b;
    cin >> b;

    switch (b)
    {
    case 1:
    {
        cout << "�� ����� 1" << endl;
    }
    case 2:
    {
        cout << "�� ����� 2" << endl;
    }
        break;
    default:
    {
        cout << "� �� ���� ����� �����!" << endl;
    }
        break;
    }
    
    */


    // Homework #02. �������� ���������, ����������� �����, ��������� � ����������, �� ��������. ---------------------------------------------------------------------------------------

    /*
    
    int num;

    cout << "������� �����" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "��������� ����� ������" << endl;
    }
    else
    {
        cout << "��������� ����� ��������" << endl;
    }
    
    */


    // ���� #12. If else. ����������� ����������� ������ if. ������� if - else if. ������� �������������. ------------------------------------------------------------------------------

    /*
    
    bool isRain = false;

    if (isRain)
    {
        cout << "��� �����, ��� ����� ����!" << endl;
    }
    else
    {
        cout << "����� ���, ���� �� �����!" << endl;
    }

    int a;

    cout << "������� �����" << endl;
    cin >> a;

    if (a > 5)
    {
        cout << "���� ����� ������ 5-��" << endl;
    }
    else if (a == 5)
    {
        cout << "���� ����� ����� 5-��" << endl;
    }
    else
    {
        cout << "���� ����� ������ 5-��" << endl;
    }
    
    */


    // ���� #11. ���������� ��������. ��������� ���������, ���������, �����������, ��������. -------------------------------------------------------------------------------------------

    /*
    
    1. ��������� ���������:

    < - ������
    > - ������
    <= - ������ / �����
    >= - ������ / �����

    2. ��������� ���������:

    == - �����
    != - �� �����

    3. ���������� ��������� ����������� � ������������� ��������:

    && - �
    || - ���
    ! - ��
    
    */
    
    /*
    
    int a = 2;
    int b = 3;

    cout << (4 > 5) << endl;
    cout << (4 < 11) << endl;
    cout << (a < b) << endl;
    cout << (4 <= 4) << endl;
    cout << (4 >= 2) << endl;

    cout << (5 == 5) << endl;
    cout << (a == b) << endl;
    cout << (5 != 7) << endl;

    cout << !(a == b) << endl;
    cout << !(a != b) << endl;

    cout << ((a == b) && (5 > 4)) << endl;
    cout << ((a != b) || (5 > 4)) << endl;
    
    */


    // ���� #10. ����������� �������������� ����� +=, -= � �.�. ------------------------------------------------------------------------------------------------------------------------

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


    // ���� #9. ��������� � ���������. ����������� � ����������. -----------------------------------------------------------------------------------------------------------------------

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


    // Homework #01. ������ ��� ����� � ������� �������� �� �����, ������������ � �������� ���������������. ----------------------------------------------------------------------------

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

    // ���� #2. ��������� � ������� ���������� ���������. #include. using namespace.

    /*

    #include <iostream>
    #include <math.h>

    /* ������ ������� ���������� � ��������� ���������� ��� ��������� iostream. ���������� - ��� ����, � ������� ���������� �������� ��������� �������, ������������� �������
    ��������������. ������ ��������� �������� ����������� ������������ �������, ����������� � ���������� iostream. */

    /* � ����� C++ ���������� ������� ������������ ����. ��� ������������ ���������� ����� �������, �� ������� ���������� �������� ��������� ��� �������. ��� ����, �����
    ������������ ��������, ����������� � ������������ ������������, ���������� ���������� ��� ������������ � ���� ���������. ���� ������������ ������������ ��� ��������� std */

    // using namespace std;

    // ������������ �����������

    /*
        �������������
        �����������
    */

    /*
    
        int main()
    {
        std::cout << "�����" << std::endl;

        setlocale(LC_ALL, "Rus");

        std::cout << "�����" << std::endl;
    }
    
    */

    // ���� #1. Visual Studio. ��� ������� ������. ������ ���������.

    /*
    
    #include <iostream>
    using namespace std;

    int main()
    {
	    cout << "Goodbye World..." << endl;
    }

    */
}

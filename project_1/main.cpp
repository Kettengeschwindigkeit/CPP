#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");

    // Урок #10. Сокращенные арифметические формы +=, -= и т.д.

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


    // Урок #9. Инкремент и декремент. Постфиксный и префиксный.

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


    // Homework #01. Ввести три числа и вывести значение их суммы, произведения и среднего арифметического.

    /*
    
    int a, b, c;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите второе число: ";
    cin >> b;

    cout << "Введите тертье число: ";
    cin >> c;

    cout << "Сумма: " << a + b + c << endl;
    cout << "Произведение: " << a * b * c << endl;
    cout << "Среднее арифметическое: " << (double)(a + b + c) / 3 << endl;

    */

 
    // Урок #8. Операторы. Арифметические операции с числами. --------------------------------------------------------------------------------------------------------------------------

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


    // Урок #7. Ввод данных. Cin. Пример. Синтаксис. -----------------------------------------------------------------------------------------------------------------------------------

    /*
    
    int Var, Var2, Var3, Var4;

    cout << "Введите первое число: ";
    cin >> Var;

    cout << "Введите второе число: ";
    cin >> Var2;

    cout << "Число 1 = " << Var << endl << "Число 2 = " << Var2 << endl;

    cout << "Введите два числа: ";
    cin >> Var3 >> Var4;

    cout << "Число 3 = " << Var3 << endl << "Число 4 = " << Var4 << endl;
    
    */


    // Урок #6. Константы. Ключевое слово const. ---------------------------------------------------------------------------------------------------------------------------------------
    
    /*
    
    const int COUNT_DAYS_IN_WEEK = 7;

    const char NEW_LINE = '\n';
    const char TAB = '\t';

    cout << TAB << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;

    */


    // Урок #5. Переменные. Способы объявления. Правила наименования. ------------------------------------------------------------------------------------------------------------------

    /*
    
    Переменная - это область оперативной памяти, обладающая собственным именем и предназначенная для хранения данных разных типов, которые могут быть изменены.

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


    // Урок #4. Типы данных.

    /*
    
    Тип		Размер в байтах		Пояснение											Диапазон значений
	float	4					описывает вещественные числа одинарной точности
	double	8					описывает вещественные числа двойной точности
	int		4					описывает целые числа								от -2147483648 до 2147483647
	short	2					описывает короткие целые числа						от -32768 до 32767
	long	4					описывает длинные целые числа						от -2147483648 до 2147483647
	char	1					описывает символы
	bool	1					описывает логические значения

    */


    // Homework #00. Вывести отформатированные строки песни или стихотворения (с переносом на новую строку, с пустой строкой между четверостишиями и т.д.)

    /*
    
    cout << "I gotta flag and a picture of Robert E. Lee\nHangin' in the den for everyone to see\nI got a 68 long bed \"GMC\"\nSittin' out back underneath a tree\n";
	cout << "Every-day I'm tired cause I work really hard\nAt 5 o'clock I punch my time card\nSo when I get home I don't pay no re-gard\nTo the junk that's pilin' up in my back-yard\n\n";
	cout << "\tWell you can wash The \"Dukes of Hazzard\" sheets on my bed\n\tYou can wash the dust off of my stuffed deer head\n\tYou can wash my mud tires 'til there's no tread\n\tBut you can't wash the red outta my redneck\n";
    
    */

    // Урок #3. Escape-последовательности. Как использовать.

    /*
    
    \n - перейти на начало новой строки
	\t - перейти к следующей позиции табуляции
	\b - удаление последнего выведенного символа
	\\ - вывести обратную косую черту
	\" - вывести двойную кавычку
	\' - вывести одинарную кавычку

    cout << "Ленин\n";
    cout << "\t\tЛенин\n\n\t\n";
    cout << "\"Ленин\"\\\n";
    
    */
}

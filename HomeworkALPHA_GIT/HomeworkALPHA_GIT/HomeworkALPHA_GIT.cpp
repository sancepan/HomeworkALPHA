#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <fstream>
#include <stdlib.h>//для строковых типов данных
#include <set>//для сортировки букв
#include <Windows.h>//для изменения цвета
using namespace std;

void SetColor(int text, int bg) {                               //Также для изменения цвета, только функция
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
double priam(double x, double y) {
	return x * y;
}
double triug(double x, double y, double a) {
	return x * y * sin(a);
}
double crug(double R) {
	return R * R * 3.14;
}
string signx(double x) {
	if (x == 0.0) return "Введен 0";
	else if (x > 0.0)return "Число положительное";
	else if (x < 0.0)return "Число отрицательное";
}

void H1_1() {
	string name;
	std::cout << "Введите ваше имя: ";
	cin >> name;
	cout << "Ваше имя: " << name << endl;
}
void H1_2() {
	int x, y;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	if (!cin) {
		cout << "Вы ввели не число" << endl;
		cin.clear();
		cin.ignore();
	}
	else {
		cout << "Сумма (x + y): " << x + y << '\n';
		cout << "Разность (x - y): " << x - y << '\n';
		cout << "Произведение (x * y): " << x * y << '\n';
		if (y == 0) {
			printf("Деление на 0, увы, невозможно");
			cout << '\n';
		}
		else {
			cout << "Частное (x / y): " << x / y << '\n';
		}
	}
}
void H1_3() {
	float b, c, x;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	if (!cin.fail()) {
		if (b == 0) {
			if (c != 0) {
				cout << "Решений нет";
			}
			else {
				cout << "x принадлежит любое число";
			}
		}
		else {
			x = -(c / b);
			cout << "Ответ: " << x << endl;
		}
	}
	else {
		cout << endl;
		cout << "Введено не число";
		cin.clear();
		cin.ignore();
		cout << endl;
	}
}
void H1_4() {
	float a, b, c, d, x;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	if (!cin.fail()) {
		if (a == 0) {
			if (b == 0) {
				if (c != 0) {
					cout << "Ответ: решений нет";
				}
				else {
					cout << "Ответ: x принадлежит любое число";
				}
			}
			else {
				x = -(c / b);
				cout << "Ответ: " << x << endl;
			}
		}
		else {
			if (c == 0) {
				x = -(b / a);
				cout << "Ответ: " << "0, " << x << endl;

			}
			else {
				d = b * b - 4 * a * c;
				if (d >= 0) {
					x = (-b - sqrt(d)) / 2;
					cout << "Ответ: " << x << ", ";
					x = (-b + sqrt(d)) / 2;
					cout << x << endl;
				}
				else {
					cout << "Ответ: нет корней" << endl;
				}

			}
		}
	}
	else {
		cout << endl;
		cout << "Введено не число";
		cin.clear();
		cin.ignore();
		cout << endl;
	}
}
void H1_5() {
	int light, street, lamp;
	cout << "Лампа включена? (1-да, !1-нет): ";
	cin >> light;
	if (light != 1) {
		cout << "На улице светло? (1-да, !1-нет): ";
		cin >> street;
		if (street != 1) {
			cout << "В комнате темно" << endl;
		}
		else {
			cout << "Шторы закрыты? (1-да, !1-нет): ";
			cin >> lamp;
			if (lamp == 1) {
				cout << "В комнате темно" << endl;
			}
			else {
				cout << "В комнате светло" << endl;
			}
		}
	}
	else {
		cout << "В комнате светло" << endl;
	}
}

void H2_1() {
	float R1, R2, H, L, Pi, V, S;
	Pi = 3.14;
	cout << "Введите значения для правильного конуса." << endl;
	cout << "R1: ";
	cin >> R1;
	cout << "R2: ";
	cin >> R2;
	cout << "H: ";
	cin >> H;
	cout << "L: ";
	cin >> L;
	if (R1 > R2) {
		swap(R1, R2);
	}
	if (R1 != R2 && R1 > 0 && R2 > 0 && H > 0 && L > 0 && (L * L == (R2 - R1) * (R2 - R1) + H * H)) {

		V = Pi * H * (R1 * R1 + R1 * R2 + R2 * R2) / 3;
		S = Pi * (R1 * R1 + (R1 + R2) * L + R2 * R2);
		cout << "Объем усеченного конуса: " << V << endl;
		cout << "Площадь полной поверхности усеченного конуса: " << S << endl;
	}
	else {
		cout << "Введены некоректные значения" << endl;
	}
}
void H2_2() {
	float x, a, i, w;
	cout << "Введите переменные.\n" << "a: ";
	cin >> a;
	cout << "x: ";
	cin >> x;
	if (x != 0) {
		if (abs(x) < 1) {
			w = a * log(abs(x));
			cout << log(x);
			cout << "W = " << w << endl;
		}
		else if (x * x <= a) {
			w = sqrt(a - x * x);
			cout << "W = " << w << endl;
		}
		else {
			cout << "Введены некоректные значения(" << endl;
		}
	}
	else {
		cout << "x не может равняться 0" << endl;
	}
}
void H2_3() {
	float x, y, b, i, z;
	cout << "Введите переменные.\n" << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "b: ";
	cin >> b;
	if (b <= y) {
		cout << "Введены некоректное значение b/y" << endl;
	}
	else if (b < x) {
		cout << "Введены некоректные значения" << endl;
	}
	else {
		z = log(b - y) * sqrt(b - x);
		cout << "z = " << z << endl;

	}
}
void H2_4() {
	int i, j, N;
	double Z;
	cout << "Введите произвольное число N: ";
	cin >> Z;
	if (Z > 0) {
		int N = (int)Z;
		N++;
		cout << "Возрастающая последовательность: ";
		for (j = 0; j < 10; j++) {
			cout << N;
			if (j != 9) {
				cout << ", ";
			}
			else {
				cout << ".";
			}
			N = N++;
		}
	}
	else {
		cout << "Возрастающая последовательность: ";
		for (j = 1; j < 11; j++) {
			cout << j;
			if (j != 10) {
				cout << ", ";
			}
			else {
				cout << ".";
			}
		}

	}
}
void H2_5() {
	float x, y, z;
	cout << "Введите z: ";
	cin >> z;
	z -= 0.5;
	cout << "Значения y: " << endl;
	for (float x = -4; x <= 4; x += 0.5) {
		z += 0.5;
		cout << "  y[" << z << "]= ";
		if (z != 1) {
			y = (z * z - 2 * z + 2) / (z - 1);
			cout << y;
		}
		else cout << "Невозможное значение Z для заданного уравнения";
		if (x != 4) {
			cout << ", " << endl;
		}
	}
	cout << ".";
	cout << endl;
	cout << endl;
}

void H3_1() {
	float S, p, n, r, m;
	std::cout << "Введите переменные.\n" << "Введите величину ссуды (S):  ";
	std::cin >> S;
	std::cout << "Введите процент (p): ";
	std::cin >> p;
	std::cout << "Введите количество лет (n): ";
	std::cin >> n;
	if ((S > 0) & (p > 0) & (n > 0)) {
		r = p / 100;
		m = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
		std::cout << "m = " << m << endl;
	}
	else {
		std::cout << "Введены некоректные данные";
	}
}
void H3_2() {
	float p, S, m, n, r, tryS;
	std::cout << "Введите переменные.\n" << "Введите величину ссуды (S): ";
	std::cin >> S;
	std::cout << "Введите месячную выплату (m): ";
	std::cin >> m;
	std::cout << "Введите количество лет (n): ";
	std::cin >> n;
	if ((S > 0) & (m > 0) & (n > 0)) {
		tryS = S + 1;
		for (p = 1; S < tryS; p++) {
			r = p / 100;
			tryS = (12 * m * (pow((1 + r), n) - 1)) / (r * (pow((1 + r), n)));
			/* cout << tryS << " " << p << endl; */
		}
		std::cout << "Процент (p): ";
		if (n > 1) {
			std::cout << p - 1 << endl;
		}
		else {
			std::cout << p - 2 << endl;
		}
	}
	else {
		std::cout << "Некорректные входные данные!" << endl;
	}
}
void H3_3() {
	string line;
	fstream file("C://123/hello_world.txt");
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << endl;
		}
	}
	file.close();
}
void H3_4() {
	int j, spacer;
	spacer = 0;
	string line;
	fstream in("C://123/hello_world.txt");
	if (in.is_open()) {
		std::cout << "Строка из файла: ";
		while (getline(in, line)) {
			for (j = 0; j < line.length(); j++) {
				if (isdigit(line[j])) {
					if (spacer == 0) {
						std::cout << line[j];
						spacer = 0;
					}
					else {
						std::cout << " " << line[j];
						spacer = 0;
					}
				}
				else {
					spacer++;
				}
			}
		}
	}
	std::cout << endl;
	std::cout << "____________________________________" << endl;
}
void H3_5() {
	string text;
	std::cout << "Введите строку, состоящую из 30 символов: ";
	std::cin >> text;
	if (text.length() == 30) {
		multiset<char> str;
		int n = 30;
		char temp;
		while (n--) {
			temp = text[n];
			str.insert(temp);
		}
		for (auto& c : str) std::cout << c;
		std::cout << endl;
	}
	else {
		std::cout << "Введено " << text.length() << " символов, а должно быть 30!!!" << endl;
	}
}

void H4_1() {
	setlocale(LC_ALL, "ru");
	char str[100];
	double sum = 0;
	ifstream file("C://123/Summa_chisel.txt"); //объявляем объект file и присваеваем ему значение папки
	if (file.is_open()) {
		while (!file.eof()) {                  //пока файл (!)-не пуст
			file >> str;                       //Обращаемся к объекту (file) и считываем массив символов
			sum += atof(str);
		}
	}
	file.close();                              //закрываем файл
	cout << "Сумма чисел заданных в файле (C://123/Summa_chisel.txt): " << sum << endl;
}
void H4_3() {
	cout << "1) Прямоугольника" << endl;
	cout << "2) Треугольника" << endl;
	cout << "3) Круга" << endl;
	cout << "Площадь какой фигуры нужно вычислить?: ";
	int nomer;
	double x, y, a, R;
	cin >> nomer;
	if (nomer == 1) {
		cout << "Введите значения для прямоугольника: " << endl;
		cout << "Сторона x= ";
		cin >> x;
		cout << "Сторона y= ";
		cin >> y;
		cout << "Площадь равна: " << priam(x, y) << endl;
	}
	else if (nomer == 2) {
		cout << "Введите значения для треугольника: " << endl;
		cout << "Сторона x= ";
		cin >> x;
		cout << "Сторона y= ";
		cin >> y;
		cout << "Угол a = ";
		cin >> a;
		cout << "Площадь равна: " << triug(x, y, a) << endl;
	}
	else if (nomer == 3) {
		cout << "Введите значения для круга: " << endl;
		cout << "Сторона R=";
		cin >> R;
		cout << "Площадь равна: " << crug(R) << endl;
	}
}
void H4_4() {
	int i, j;
	std::cout << endl;
	for (i = 0; i < 12; i++)
		for (j = 0; j < 40; j++) {
			if (j != 39) {
				if (j < 8) {
					if (i < 6) {
						cout << "* ";
					}
					else {
						cout << "__";
					}
				}
				else {
					cout << "_";
				}
			}
			else {
				cout << endl;
			}
		}
	std::cout << endl;
	std::cout << "____________________________________" << endl;
}
void H4_5() {
	int n;
	float x;
	HDC hDC = GetDC(GetConsoleWindow());
	HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
	SelectObject(hDC, Pen);
	MoveToEx(hDC, 400, 300, NULL);
	LineTo(hDC, 1000, 300);
	MoveToEx(hDC, 700, 45, NULL);
	LineTo(hDC, 700, 555);
	MoveToEx(hDC, 695, 270, NULL);         //деления по игрику
	LineTo(hDC, 705, 270);
	MoveToEx(hDC, 695, 330, NULL);
	LineTo(hDC, 705, 330);
	MoveToEx(hDC, 795, 290, NULL);         //деления по иксу
	LineTo(hDC, 795, 310);
	MoveToEx(hDC, 605, 290, NULL);
	LineTo(hDC, 605, 310);
	MoveToEx(hDC, 890, 290, NULL);
	LineTo(hDC, 890, 310);
	MoveToEx(hDC, 510, 290, NULL);
	LineTo(hDC, 510, 310);
	for (x = -8.0f; x <= 8.0f; x += 0.01f) // O(100,85) - center
	{
		MoveToEx(hDC, 30 * x + 700, -30 * sin(x) + 300, NULL);//10 - scale
		LineTo(hDC, 30 * x + 700, -30 * sin(x) + 300);
	}
}
void H4_6() {
	char lat[100];
	int count = 0;
	cout << "Введите число в римской системе счисления: ";
	cin >> lat;
	for (int i = 0; i < strlen(lat); i++) {
		switch (lat[i]) {
		case 'M':
			count += 1000;
			break;
		case 'D':
			count += 500;
			break;
		case 'C':
			if (i + 1 < strlen(lat) && (lat[i + 1] == 'D' || lat[i + 1] == 'M'))
				count -= 100;
			else
				count += 100;
			break;
		case 'L':
			count += 50;
			break;
		case 'X':
			if (i + 1 < strlen(lat) && (lat[i + 1] == 'L' || lat[i + 1] == 'C' || lat[i + 1] == 'M'))
				count -= 10;
			else
				count += 10;
			break;
		case 'V':
			count += 5;
			break;
		case 'I':
			if (i + 1 < strlen(lat) && (lat[i + 1] == 'V' || (lat[i + 1] == 'X' && lat[i + 2] != 'X') || lat[i + 1] == 'C'))
				count -= 1;
			else count += 1;
			break;
		}
	}
	cout << "Число в десятичной системе счисления: " << count << endl;
}
void H4_7() {

}
void H4_8() {

}
void H4_9() {

}
int main() {
	int k = 1;
	setlocale(LC_ALL, "ru");
	SetColor(2, 0);
	std::cout << "HOMEWORK_ALPHA" << endl;
	SetColor(7, 0);
	std::cout << "____________________________________" << endl;
	while (k != 0) {
		SetColor(2, 0);
		std::cout << "ГЛАВНОЕ_МЕНЮ" << endl;
		SetColor(7, 0);
		std::cout << "____________________________________" << endl;
		SetColor(14, 0);
		std::cout << "Выберите домашнюю работу из списка: " << endl;
		std::cout << "1] Homework_1.0" << endl;
		std::cout << "2] Homework_2.0" << endl;
		std::cout << "3] Homework_3.0" << endl;
		std::cout << "4] Homework_4.0" << endl;
		std::cout << "0] ";
		SetColor(4, 0);
		std::cout << "ЗАВЕРШИТЬ_ПРОГРАММУ" << endl;
		SetColor(7, 0);
		std::cout << "Введите номер д/з: ";
		std::cin >> k;
		SetColor(7, 0);
		std::cout << "____________________________________" << endl;
		int n = 1;
		while (n != 0 & k != 0) {
			SetColor(2, 0);
			std::cout << "Homework_" << k << endl;
			SetColor(7, 0);
			std::cout << "____________________________________" << endl;
			SetColor(14, 0);
			if (k == 1) {
				cout << "Выберите домашнее задание из списка: " << endl;
				cout << "1) Имя" << endl;
				cout << "2) Арифметика" << endl;
				cout << "3) Уравнение" << endl;
				cout << "4) Еще уравнение" << endl;
				cout << "5) Лампа со шторой" << endl;
				cout << "0) ";
				SetColor(4, 0);
				cout << "ВЫЙТИ_В_ГЛАВНОЕ_МЕНЮ" << endl;
				SetColor(7, 0);
				cout << "Введите номер д/з: ";
				cin >> n;
				SetColor(7, 0);
				cout << "____________________________________" << endl;
				int j = 1;
				while (j == 1 & n != 0) {
					SetColor(2, 0);
					std::cout << "Homework_1." << n << endl;
					SetColor(7, 0);
					std::cout << "____________________________________" << endl;
					if (n == 1) {
						H1_1();
					}
					else if (n == 2) {
						H1_2();;
					}
					else if (n == 3) {
						H1_3();
					}
					else if (n == 4) {
						H1_4();
					}
					else if (n == 5) {
						H1_5();
					}
					else if (n != 0) {
						cout << "Данного задания не найдено" << endl;
						std::cout << "____________________________________" << endl;
					}
					SetColor(4, 0);
					cout << "Хотите продолжить? (1-да, !1-нет): ";
					SetColor(7, 0);
					cin >> j;
					cout << "____________________________________" << endl;
				}
			}
			else if (k == 2) {
				cout << "Выберите домашнее задание из списка: " << endl;
				cout << "1) Конус" << endl;
				cout << "2) Разветвление" << endl;
				cout << "3) Функция" << endl;
				cout << "4) Порядок" << endl;
				cout << "5) Табуляция" << endl;
				cout << "0) ";
				SetColor(4, 0);
				cout << "ВЫЙТИ_В_ГЛАВНОЕ_МЕНЮ" << endl;
				SetColor(7, 0);
				cout << "Введите номер д/з: ";
				cin >> n;
				SetColor(7, 0);
				cout << "____________________________________" << endl;
				int j = 1;
				while (j == 1 & n != 0) {
					SetColor(2, 0);
					std::cout << "Homework_2." << n << endl;
					SetColor(7, 0);
					std::cout << "____________________________________" << endl;
					if (n == 1) {
						H2_1();
					}
					else if (n == 2) {
						H2_2();;
					}
					else if (n == 3) {
						H2_3();
					}
					else if (n == 4) {
						H2_4();
					}
					else if (n == 5) {
						H2_5();
					}
					else if (n != 0) {
						cout << "Данного задания не найдено" << endl;
						std::cout << "____________________________________" << endl;
					}
					SetColor(4, 0);
					cout << "Хотите продолжить? (1-да, !1-нет): ";
					SetColor(7, 0);
					cin >> j;
					cout << "____________________________________" << endl;
				}
			}
			else if (k == 3) {
				std::cout << "Выберите домашнее задание из списка: " << endl;
				std::cout << "1) Заем" << endl;
				std::cout << "2) Ссуда" << endl;
				std::cout << "3) Копирование файла" << endl;
				std::cout << "4) Фильтр" << endl;
				std::cout << "5) Сортировка букв" << endl;
				std::cout << "0) ";
				SetColor(4, 0);
				std::cout << "ВЫЙТИ_В_ГЛАВНОЕ_МЕНЮ" << endl;
				SetColor(7, 0);
				std::cout << "Введите номер д/з: ";
				std::cin >> n;
				SetColor(7, 0);
				std::cout << "____________________________________" << endl;
				int j = 1;
				while (j == 1 & n != 0) {
					SetColor(2, 0);
					std::cout << "Homework_3." << n << endl;
					SetColor(7, 0);
					std::cout << "____________________________________" << endl;
					if (n == 1) {
						H3_1();
					}
					else if (n == 2) {
						H3_2();
					}
					else if (n == 3) {
						H3_3();
					}
					else if (n == 4) {
						H3_4();
					}
					else if (n == 5) {
						H3_5();
					}
					else if (n != 0) {
						cout << "Данного задания не найдено" << endl;
						std::cout << "____________________________________" << endl;
					}
					SetColor(4, 0);
					cout << "Хотите продолжить? (1-да, !1-нет): ";
					SetColor(7, 0);
					cin >> j;
					cout << "____________________________________" << endl;
				}
			}
			else if (k == 4) {
				std::cout << "Выберите домашнее задание из списка: " << endl;
				std::cout << "1) Файл" << endl;
				std::cout << "2) Знак числа" << endl;
				std::cout << "3) Геометрические фигуры" << endl;
				std::cout << "4) Былая слава" << endl;
				std::cout << "5) Синусоида" << endl;
				std::cout << "6) Автоматный распознаватель" << endl;
				std::cout << "7) Генератор случайных чисел" << endl;
				std::cout << "8) Умножение матриц" << endl;
				std::cout << "9) Системы счисления" << endl;
				std::cout << "0) ";
				SetColor(4, 0);
				std::cout << "ВЫЙТИ_В_ГЛАВНОЕ_МЕНЮ" << endl;
				SetColor(7, 0);
				std::cout << "Введите номер д/з: ";
				std::cin >> n;
				SetColor(7, 0);
				std::cout << "____________________________________" << endl;
				int j = 1;
				while (j == 1 & n != 0) {
					SetColor(2, 0);
					std::cout << "Homework_4." << n << endl;
					SetColor(7, 0);
					std::cout << "____________________________________" << endl;
					if (n == 1) {
						H4_1();
					}
					else if (n == 2) {
						double x;
						cout << "Введите x: ";
						cin >> x;
						cout << signx(x) << endl;
					}
					else if (n == 3) {
						H4_3();
					}
					else if (n == 4) {
						H4_4();
					}
					else if (n == 5) {
						H4_5();
					}
					else if (n == 6) {
						H4_6();
					}
					else if (n == 7) {
						H4_7();
					}
					else if (n == 8) {
						H4_8();
					}
					else if (n == 9) {
						H4_9();
					}
					else if (n != 0) {
						cout << "Данного задания не найдено" << endl;
						std::cout << "____________________________________" << endl;
					}
					SetColor(4, 0);
					std::cout << "Желаете повторить? (1-да, !1-нет): ";
					SetColor(7, 0);
					std::cin >> j;
					while (!cin) {
						cin.clear();                                            //очищаем флаг ошибки
						cin.ignore(10000, '\n');                                //извлекаем 10000 символов из буфера, но останавливаемся, когда строка заканчивается (условие нужно, чтобы не повторялся фрагмент кода при количестве символов в пер J > 1
						SetColor(4, 0);
						std::cout << "Желаете повторить? (1-да, !1-нет): ";
						SetColor(7, 0);
						std::cin >> j;
					}
					std::cout << "____________________________________" << endl;
				}
			}
			else if (k != 0) {
				SetColor(4, 0);
				cout << "Нет заданного д/з!!!";
				SetColor(7, 0);
				n = 0;
				cout << endl;
			}
		}
	}
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, ".1251");
	double age, salary;
	cin >> age >> salary;
	if (age > 20 && (salary > 400 && salary < 1000)) {
		cout << "We will consider your position" << endl;
	}
	else {
		cout << "You are not suitable" << endl;
		return 1;
	}
	string name, surname, position;
	cout << "Iм'я: " << endl;
	cin >> name;
	cout << "Прiзвище: " << endl;
	cin >> surname;
	cout << "Посада: " << endl;
	cin >> position;
	cout << "Ваше iм'я: " << name << " " << surname << endl << "Ваш вiк: " << age << endl << "Ваша посада: " << position << endl << "Зарплата: " << salary;
	return 0;
}
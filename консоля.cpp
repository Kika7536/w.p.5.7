#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 7. Сокращение дроби." << endl;
	cout << "--------------------------------------------" << endl << endl;

	int m, n;
	int i = 20;


	while (true) {
		cout << "Введите числитель: ";
		cin >> m;

		cout << "Введите знаменатель: ";
		cin >> n;

		if ((m < 0 && n < 0) || (m > 0 && n < 0)) {
			m *= -1;
			n *= -1;
		}

		if (n == 0) {
			cout << "Знаменатель не может быть равным 0." << endl;
			main();
		}


		while (i != 1) {
			if (n % i == 0 && m % i == 0) {
				n /= i;
				m /= i;
			}
			i--;

		}

		cout << "Результат: " << m << " / " << n << endl;

		i = 20;
	}
}
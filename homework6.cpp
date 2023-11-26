#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	cout << "Добро пожаловать в игру Кости!" << endl;
	system("pause");
	system("cls");

	for (int qpl1 = 0, qpl2 = 0, qcp1 = 0, qcp2 = 0, qplc = 0, qcpc = 0, plc = 0, comc = 0; plc <= 4; ) {
		cout << "Компьютер бросает кубики!" << endl;
		qcp1 = rand() % 6;
		qcp2 = rand() % 6;
		if (qcp1 == qcp2) {
			cout << "ПК бросил дубль. Очки умножаются вдвое." << endl;
			qcpc = ((qcp1 + qcp2) * 2);
		}
		else if (qcp1 != qcp2) {
			qcpc = (qcp1 + qcp2);
		}
		cout << "Компьютер выбросил кости в количестве = " << qcpc << endl;
		system("pause");
		qpl1 = rand() % 6;
		qpl2 = rand() % 6;
		if (qpl1 == qpl2) {
			cout << "Вы выбросили дубль. Очки умножаются вдвое." << endl;
			qplc = ((qpl1 + qpl2) * 2);
		}
		else if (qpl1 != qpl2) {
			qplc = (qpl1 + qpl2);
		}
		cout << "Вы выбросили кости в количестве = " << qplc << endl;
		system("pause");
		if (qplc == qcpc) {
			cout << "Ваши очки равны. Ничья!" << endl;
			continue;
		}
		else if (qplc > qcpc) {
			cout << "Ваш счет больше. Вы выиграли!" << endl;
			plc++;
			system("pause");
			system("cls");
			continue;
		}
		else if (qcpc > qplc) {
			cout << "Счет компьютера больше. Вы проиграли!" << endl;
			comc++;
			system("pause");
			system("cls");
			continue;
		}
		if (plc == 3) {
			cout << "Вы победили со счетом " << plc << "/" << comc << endl;
			break;
		}
		else if (comc == 3) {
			cout << "Компьютер победил со счетом " << comc << "/" << plc << endl;
			break;
		}
	}
}
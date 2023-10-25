

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    cout << "Добро пожаловать в игру камень, ножницы, бумага!" << endl << "Введите цифру от 1 до 3, где 1 - камень, 2 - ножницы, а 3 - бумага." << endl;
    int player, computer, count_p, count_c;
    count_p = 0;
    count_c = 0;
    while (count_p < 5 || count_c < 5) {
        cin >> player;
        computer = rand() % 3;
        if (count_c == 5) {
            cout << "Компьютер победил! Конец игры!";
            break;
        }
        else if (count_p == 5) {
            cout << "Вы победили! Конец игры!";
            break;
        }
        if (player > 3) {
            cout << "Вы ввели неверную цифру.";
        }
        if (player == computer) {
            cout << "Ничья! Играем дальше.";
        }
        else if (player == 1 && computer == 2) {
            cout << "Вы победили! У компа ножницы.";
            count_p++;
        }
        else if (player == 1 && computer == 3) {
            cout << "Вы проиграли! У компа бумага.";
            count_c++;
        }
        else if (player == 2 && computer == 1) {
            cout << "Вы проиграли! У компа камень.";
            count_c++;
        }
        else if (player == 2 && computer == 3) {
            cout << "Вы победили! У компа бумага.";
            count_p++;
        }
        else if (player == 3 && computer == 1) {
            cout << "Вы победили! У компа камень.";
            count_p++;
        }
        else if (player == 3 && computer == 2) {
            cout << "Вы проиграли! У компа ножницы.";
            count_c++;
        }
    }
}
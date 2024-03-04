

#include <iostream>
using namespace std;

#define random(a, b) a+rand()%(b-a+1)

int task1(int degree, int index) {
    int answer = degree;
    for (int i = 1; i < index; i++) {
        answer *= degree;
    }
    return answer;
}


int task2(int min, int max) {
    int summ = 0;
    for (int i = min; i <= max; i++) {
        summ += i;
    }
    return summ;
}

int main()
{

}
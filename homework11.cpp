
#include <iostream>
using namespace std;

#define random(a, b) a+rand()%(b-a+1)

bool flag = false;
void fullArrayByAnArray(int array[], int array2[]) {
    for (int i = 0, k = 0; i < 9; i++) {
        for (int j = 9; j > i; j--) {
            if (array[i] == array[j]) {
                flag = true;
            }
        }
        if (flag) {
            array2[k++] = array[i];
            flag = false;
        }
    }
}

void fillArray(int array[]) {
    for (int i = 0; i < 10; i++) {
        array[i] = random(1, 10);
    }
}

void showArray(int array[]) {
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    int array[10] = {};
    int array2[10] = {};
    fillArray(array);
    showArray(array);
    fullArrayByAnArray(array, array2);
    showArray(array2);
}


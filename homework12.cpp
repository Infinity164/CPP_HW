

##include <iostream>
using namespace std;

#define random(a, b) a+rand()%(b-a+1)

int findindex(int array[]) {

}

void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = random(1, 10);
    }
}

void showArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = sizeof(array) / sizeof(array[0]);
    int array[10]{};
    fillArray(array);
    showArray(array);
}
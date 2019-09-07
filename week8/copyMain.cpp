#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;
 
#define ORIGINAL_SIZE 3
 
void transformArray(int *&array, int size);
 
int main() {
 
    int *myArray = new int[ORIGINAL_SIZE];
    myArray[0] = 4;
    myArray[1] = 2;
    myArray[2] = 5;
 
    transformArray(myArray, ORIGINAL_SIZE);
 
    for (int i = 0; i < (ORIGINAL_SIZE * 2); i++) {
        cout << "Transformed value: " << myArray[i] << endl;
    }
 
    delete[] myArray;
 
    return 0;
}
 
void transformArray(int *&array, int size) {
    int *temp = new int[size * 2];
 
    for (int i = 0; i < size; i++) {
        temp[i] = array[i];
    }
 
    for (int i = 0; i < size; i++) {
        temp[i + size] = array[i] + 1;
    }
 
    delete[] array;
    array = temp;
}
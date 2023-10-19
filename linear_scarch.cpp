// Linear scarch using malloc function.
#include <cstdlib>
#include <iostream>
using namespace std;
int main() {
    int arr;
    int n;  // number of elements declearation
    int item, flag, j;
    cout << "enter the number of elements :";
    cin >> n;
    arr = n;
    // pointer variable declaration
    int *ptr;

    // allocating memory to the pointer variable using malloc()
    ptr = (int *)malloc(sizeof(int) * arr);
    for (int i = 0; i < arr; i++) {
        cout << "Enter a number : " << endl;
        cin >> *(ptr + i);
    }
    cout << "Entered elements are : " << endl;
    for (int i = 0; i < arr; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    cout << "enter the item to be scarched =";
    cin >> item;
    for (j = 0; j < arr; j++) {
        flag = 0;
        if (item == *(ptr + j)) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        cout << "the scarched item has been found! at" << j + 1;
    } else
        cout << "oops! scarched item not found.";

    free(ptr);
    return 0;
}

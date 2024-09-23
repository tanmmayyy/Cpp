#include <iostream>
using namespace std;

int main() {
    int ele;
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Declaration of array with size n+1 to accommodate the new element
    int arr[n + 1];

    // Taking input of elements
    for (int i = 0; i < n; i++) {
        cout << "Enter the element: ";
        cin >> ele;
        arr[i] = ele;
    }

    // Printing the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Inserting an element at the start
    int begin;
    cout << "Enter the element you want to append at the beginning of the array: ";
    cin >> begin;

    // Shifting elements to the right
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }


    // Placing the new element at the start
    arr[0] = begin;
    n++; // Increase the size of the array

    // Printing the new array
    cout << "New array after inserting the element at the beginning: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// some commments

#include <iostream>
using namespace std;



int main(){

    // declaration of array
    int ele;
    int n;
    int arr[n];

    cout << "Enter the size of array ";
    cin>>n;

    
    
    // taking input of elements

    for(int i =0; i<n; i++){
        cout << "Enter the element: ";
        cin>>ele;
        arr[i]=ele;
    }

    return 0;
}
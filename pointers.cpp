#include <iostream>
using namespace std;

int main(){
    // what is a pointer --->  data type which holds the adderess of other datatype

    // int a = 3;
    // int *b = &a;
                                                            
    // // & ---> (address of ) operator
    // cout << "Address of a is: "<< &a <<endl;
    // cout << "Address of a is: "<< b <<endl;
    
    // // * ---> dereference operator

    // cout << "The value at address b is: "<< *b <<endl;


    int num = 5;
    int *add_num = &num;
    num++;
    cout << "address of num is: "<< add_num<<endl;
    cout << "the value at add_num is :"<<*add_num<<endl;
    cout << "size of integer is: "<< sizeof(num)<<endl;
    cout << "size of pointer add_num is: "<<sizeof(add_num)<<endl;


    string a = "A";
    string *add_a = &a;
    cout<< &a<<endl;
    cout << "size of char a is: "<< sizeof(a)<<endl;

    int **add_add_num = &add_num;
    cout << add_add_num<<endl;


}

#include<iostream>
using namespace std;

int main(){
    int age;
    cout << "tell me your age";
    cin>>age;
    if (age < 18){
        cout << "you are not eligible";
    }else if(age==18){
        cout<<"u r idiot";
    }
    else{
        cout<<"u r eligible";
    }
    return 0;
}
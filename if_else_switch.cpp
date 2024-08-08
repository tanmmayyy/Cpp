#include<iostream>
using namespace std;

//selection control structure if  else-if else ladder


int main(){
    int age;
    cout << "tell me your age";
    cin>>age;
    // if (age < 18){
    //     cout << "you are not eligible";
    // }else if(age==18){
    //     cout<<"u r idiot";
    // }
    // else{
    //     cout<<"u r eligible";
    // }
    // return 0;

    //selection control structure: switch statements
    switch (age)
    {
    case 18:
        /* code */
        cout << " you are 18";
        break;
    case 22:
        /* code */
        cout << " you are 22";
        break;
    case 5:
        /* code */
        cout << " you are 5";
        break;
    default:
        cout << "No special cases"<<endl;
        break;
    }
}




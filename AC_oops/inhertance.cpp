#include <iostream>
using namespace std;
#include <string>

class Person{
public:
    string name;
    int age;
    
    Person(string name, int age){
        this -> name = name;
        this -> age = age;

    }
};


class Student : public Person{
    // name, age , rollno
public:
    int roll;

    void getInfo(){
        cout << "name: "<<name<<endl;
        cout << "age: "<<age<<endl;
        cout << "roll: "<<roll<<endl;
    }



};



int main(){

    //Student s1("damdam", 12, 32);

    //s1.getInfo();


    return 0;
}
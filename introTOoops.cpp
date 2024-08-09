#include <iostream>
using namespace std;

class Employee{
public: 
    string Name;                             //Attributes{
    string Company;
    int Age;                                 //          }                       

    void introduce(){                        //method
        cout<< "Name- "<<Name<<endl;
        cout<< "Company- "<<Company<<endl;
        cout<< "Age- "<<Age<<endl;

    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;

    }

};


int main(){
    // Employee employee1;
    // employee1.Name = "Notty Fufa";
    // employee1.Company = "Notty Adda";
    // employee1.Age = 84;

    Employee employee1 = Employee("Notty Fufa","Notty Adda", 84);             //constructor
    employee1.introduce();

    Employee employee2 = Employee("John","WWE", 45);                          //constructor
    employee2.introduce();
}

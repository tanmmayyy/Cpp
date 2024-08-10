#include <iostream>
using namespace std;

class Employee{
private: 
    string Name;                             //Attributes{
    string Company;
    int Age;                                 //          }                    
public:
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }

    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }

    int getAge(){
        return Age;
    }

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

    employee1.setAge(40);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old";
}

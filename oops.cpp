#include <iostream>
using namespace std;

class Employee{
public: 
    string Name;
    string Company;
    int Age;

    void introduce(){                        //method
        cout<< "Name- "<<Name<<endl;
        cout<< "Company- "<<Company<<endl;
        cout<< "Age- "<<Age<<endl;

    }
};


int main(){
    Employee employee1;
    employee1.Name = "Notty Fufa";
    employee1.Company = "Notty Adda";
    employee1.Age = 84;
    employee1.introduce();
}
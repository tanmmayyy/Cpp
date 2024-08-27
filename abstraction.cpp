#include <iostream>
using namespace std;


class abstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee{
private: 
    string Name;                             //Attributes are encapsulated {
    string Company;
    int Age;                                 //                            }                    
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
        if (age >=18){
            Age = age;
        }
        
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

    void AskForPromotion() {
        if (Age>30){
            cout << Name << " got promoted!"<<endl;
        }else{
            cout << Name << ", sorry no promotion for you!"<<endl;
        }

    }
    

};


int main(){
    // Employee employee1;
    // employee1.Name = "Notty Fufa";
    // employee1.Company = "Notty Adda";
    // employee1.Age = 84;

       Employee employee1 = Employee("Notty Fufa","Notty Adda", 84);             //constructor
//     employee1.introduce();

       Employee employee2 = Employee("John","WWE", 5);                          //constructor
//     employee2.introduce();

//     employee1.setAge(11);
//     cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old";

        employee1.AskForPromotion();
        employee2.AskForPromotion();
 }

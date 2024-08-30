#include <iostream>
#include <string>
using namespace std;



class Teacher{

private:

    double salary;






public:
    // two constructors with same name is considered as constrcutor overloading



    //non-parameterized constructor
    // Teacher(){
    //     dept = "Computer Science";  
    // }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;

    }

    // copy constructor
    Teacher (Teacher &orgobj){             // pass by reference
        cout << "i am custom copy constructor"<<endl;
        this-> name = orgobj.name;
        this-> dept = orgobj.dept;
        this-> subject = orgobj.subject;
        this -> salary = orgobj.salary;
    }

    //properties/attributes

    string name;
    string dept;
    string subject;
    


    //methods-> func inside the class / member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // //setters -> to set value of private attribute
    // void setSalary(double s){
    //     salary = s;
    // }


    // //getters -> to view value of private attribute
    // double getSalary(){
    //     return salary;


    void getInfo(){
        cout << "name: "<<name<<endl;
        cout << "subject: "<<subject<<endl;
    }
 



};


int main(){
    Teacher t1("Notty damaad", "computer science","c++",2500000);
    Teacher t2(t1);                                              // it calls default copy constructor
    // t1.name = "Notty damaad";
    // t1.subject = "c++";
    // t1.dept = "Computer science";
    // t1.setSalary(2500000);

     

    // cout << t1.name<<endl;
    // cout << t1.getSalary() <<endl;

    t2.getInfo();
    
    
    
    return 0;
}
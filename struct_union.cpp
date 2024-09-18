#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
};

int main(){

    struct employee munna;
    munna.eID = 1;
    munna.favChar = 'M';
    munna.salary = 999999999;
    cout << munna.salary<<endl;
    cout << munna.eID << endl;
    cout << munna.favChar << endl;



    return 0;
}
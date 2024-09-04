#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> arr = {1,2,3,4,5,6,7,8,9};

    int mid = (arr.size()-1)/2;
    int low = 0, high = (arr.size())-1;
    int key = 7;

    while (low <= high){
        int mid = (low + high)/2;
        if (arr[mid]==key){
            return mid;       
            return 0;
        }else if(key > arr[mid]){
            low = mid + 1;
        }else{
            high = mid -1; 
            
        }
    }
    return -1;
}
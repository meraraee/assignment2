#include <iostream>
using namespace std;


void swap(int *ptr1, int *ptr2){ //parameters are our pointers

    //sawping where our pointers are pointing in which index
    int temp = *ptr1;
    
    *ptr1 = *ptr2;
    
    *ptr2 = temp;
    
}



int main(){
    
   
    int arr[] = {2,8};
    
    //store our number of index in int
    int element0 = 0;
    int element1 = 1;
    
    cout << "original array: ";
    for(int i = 0; i < 2;i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
    
    
    swap(&arr[element0], &arr[element1]); //our argument are elements then are turned to pointers
    
    
    //outputting the swapped array
    cout << "swapped variables: ";
    for(int i = 0; i < 2;i++){
        cout << arr[i] << ", " ;
    }
    cout << endl;
    
    return 0;
}

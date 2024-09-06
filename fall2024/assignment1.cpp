#include <iostream>
using namespace std;


int main2(){
    
    int num1 = 1;
    int num2 = 2;
    
    cout << num1 << " & " << num2 << endl;
    
    int temp;
    
    // swaping numbers
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << num1 << " & " << num2 << endl;
    return 0;
}

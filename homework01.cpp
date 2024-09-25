#include <iostream>
using namespace std;

int main(){
    
    int num;
    int binary;
        
    
        cout << "Enter a positive integer: ";
        cin >> num;
    
    
    cout << "The binary number for " << num << " is: ";

    while(num > 0){
        
        binary = num % 2;   //mod of 2 will be binary number(s)
        cout << binary;
        num = num /2;   //will renew num until it equals zero then it will stop
        
    }

    cout << endl;
    
    
    return 0;
}

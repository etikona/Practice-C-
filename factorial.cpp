#include <iostream>
using namespace std;
 int main() {
    int num;
    cout << "Please provide a positive number" << endl;
    cin >> num;
    int fact = 1;
    for(int i = 1; i <= num; ++i){
        fact *= i;
    }
    cout << "The Factorial of given number is " << fact ;


    return 0;
 }
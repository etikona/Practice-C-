#include <iostream>
using namespace std;
int main(){
 int num1, num2;
    cout << "Please provide two numbers" << endl;
    cin >> num1 >> num2;
    int op;
    cout << "Please give an operator" << endl;
    cin >> op;
    switch(op){
        case '+' :
        cout << num1 + num2 << endl;
        break;
        case '-' :
        cout << num1 - num2 << endl;
        break;
        case '*' :
        cout << num1 * num2 << endl;
        break;
        case '/' :
        cout << num1 / num2 << endl;
        break;
        default : 
        cout << "You give wrong information" << endl;
        break;
    }

    return 0;
}
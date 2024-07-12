#include <iostream>
using namespace std;
int main(){
int num;
cout << "Please provide a positive number." << endl;
cin >> num;
int multi = 1;
for(int i = 1; i <= 10; i++){
    multi *= i;
}
cout << multi;

    return 0;
}

#include<iostream>
using namespace std;
int main() {
    //* Print all the numbers from 0 to 100 but only skip these numbers which are dividable with 3.
    for(int i=0; i <=100; i++){
        if(i%3==0){
            continue;
        }
        cout <<i << endl;
    }
    // * Check the numbers are prime or not.
    int n;
    cout <<"give the value of n = ";
    cin >> n;
    int i;
    for(i=2; i <=n; i++){
        if(n%i==0){
            cout << "It is a non prime number" << endl;
            break;
        }
    }
    if(n==i){
        cout << n << endl << "It is a Prime." << endl;
    }
    // * Print all the prime numbers between a and b.
    int a, b;
    cin >> a >> b;
    for(int num =a; num <= b; num++){
        int i;
        for(i=2; i <= num; i++){
            if(num%i ==0){
                break;
            }
        }
        if(num==i){
            cout << i << endl;
        }
    }

    return 0;
}
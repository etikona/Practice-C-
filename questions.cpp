#include <iostream>
using namespace std;
int main(){
 // ! Question ----> 2
// * Write a program that takes a score (0-100) as input and prints the corresponding grade based on the following criteria:
// * 90-100: A
//* 80-89: B
// * 70-79: C
// *60-69: D
//* 0-59: F 
int score;
cin >> score;

if (score >= 90 && score <= 100){
    cout << score << " Your grade is A";
}
else if (score >= 80 && score <= 89){
    cout << score << " Your grade is B";
}
else if (score >= 70 && score <= 79){
    cout << score << " Your grade is C";
}
else if (score >= 60 && score <= 69){
    cout << score << " Your grade is D";
}
else if(score >= 0 && score <= 59){
    cout << score << " Your grade is F";
}
else{
    cout << "Please provide a valid score";
}

    return 0;
}
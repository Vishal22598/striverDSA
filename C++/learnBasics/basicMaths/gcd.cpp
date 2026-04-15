#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int num1 = 0, num2=0;
    // cout << "enter num1 num: ";
    cin >> num1;
    // cout << endl << "enter num1 num: ";
    cin >> num2;

    if(num1>num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    int gcd;
    while(num2 % num1 != 0 && gcd > 0){
        gcd = num2 % num1;
        // cout << "g: " << gcd << " ,";
        num2 = num1;
        num1 = gcd;
    }
    cout << endl << "gcd: "  << gcd;
}
#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int num = 0;
    cout << "enter a num: ";
    cin >> num;
    int rev=0, n=num;
    while(num > 0){
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    string isPalindrome = (rev == n) ? "Palindrone" : "Not Palindrone";
    cout << endl << ": "  << isPalindrome;
}
#include<iostream>
#include<cmath>

using namespace std;


int main(){
    cout << "Armstrong Number" << endl;
    int num = 0;
    cin >> num;

    int digitCount = log10(num) + 1;
    cout << " dig: " << digitCount << endl;

    int sum = 0, n = num;
    while(n>0){
        int rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n/10;
    }
    string isArmstrong = sum == num ? "Armstrong" : "Not Armstrong";
    cout << endl << isArmstrong;
}
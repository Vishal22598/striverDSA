#include <bits/stdc++.h>
using namespace std;

// Recursive function to compute the Nth Fibonacci number
int fibonacci(int N) {
    // Base case: if N is 0 or 1, return N itself
    if (N <= 1) {
        return N;
    }

    // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
    int last = fibonacci(N - 1);   // (N-1)th Fibonacci
    int slast = fibonacci(N - 2);  // (N-2)th Fibonacci
    return last + slast;
}

int main() {
    int N = 4;
    cin >> N;
    // cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
    for(int i=0; i<N; i++){
        cout << fibonacci(i) << " ";
    }
    return 0;
}

class Solution{
    public:
    void fib(int n){
    int a = 0, b = 1, c;
    if(n>2)
        cout << a << " " << b << " ";
    int i=2; 
    while(i<n){
        c=a+b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }
   }

   void fib(int a, int b, int i, int n){
    if(i>n)
        return;
    if(i<3 && n>3){
        cout << 0 << " " << 1 << " ";
        i = 2;
    }
    cout << a+b << " ";
    fib(b, a+b, i+1, n);
   }
   int fib1(int n){
    if(n==0 || n == 1)
        return n;
    return fib1(n-1) + fib1(n-2);
   }
};
#include<iostream>

using namespace std;

int brute(int prices[], int n){
    int maxProfit=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int curProfit = prices[j] - prices[i];
            maxProfit = curProfit > maxProfit ? curProfit : maxProfit;
        }
    }
    return maxProfit;
}

int optimized(int prices[], int n){
    int maxProfit = 0, minPrice = INT8_MAX;

    for(int i=0; i<n; i++){
        minPrice = prices[i] < minPrice ? prices[i] : minPrice;
        int curProfit = prices[i] - minPrice;
        maxProfit = curProfit > maxProfit ? curProfit : maxProfit;
    }
    return maxProfit;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    // cout << "max profit : " << brute(arr, n);
    cout << "max profit : " << optimized(arr, n);

    return 0;
}
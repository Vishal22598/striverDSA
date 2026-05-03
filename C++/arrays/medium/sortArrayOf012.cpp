#include<iostream>
#include<algorithm>
using namespace std;

void brute(int arr[], int n){
    int cnt0=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0)
            cnt0++;
        else if(arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for(int i=0; i<cnt0; i++)
        arr[i] = 0;
    for(int i=cnt0; i<cnt0+cnt1; i++)
        arr[i] = 1;
    for(int i=cnt0+cnt1; i<n; i++)
        arr[i] = 2;
}

void optimized(int arr[], int n){
    int l=0,m=0,r=n-1;
    while(m<r){
        if(arr[m] == 0){
            swap(arr[m], arr[l]);
            l++;
        }
        if(arr[m] == 2){
            swap(arr[m],arr[r]);
            r--;
            m--;
        }
        m++;
    }
}

int main(){
    int n;
    cout << "enter a num: " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    // brute(arr, n);
    optimized(arr, n);
    for(int i: arr){
        cout << i << ", ";
    }
    
    return 0;
}
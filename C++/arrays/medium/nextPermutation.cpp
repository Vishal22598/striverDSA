#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void nextPermutation(int arr[], int n){
    int i;
    for(i=n-2; i>0; i--){
        if(arr[i] > arr[i-1])
            break;
    }

    if(i==-1){
        reverse(arr, arr+n-1);
        return;
    }
    int j;
    for(j=n-1; j>i; j--)
    {
        if(arr[j] > arr[i-1])
        break;
    }

    //swap
    swap(arr[i-1], arr[j]);
    sort(arr+i, arr+n-1);
}

int main(){
//     4
// 1 2 -4 -5
    int n;
    // cout << "enter a num: " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }

    nextPermutation(arr, n);
    for(int i: arr)
        cout << i << ", ";
    return 0;
}
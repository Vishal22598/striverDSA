#include<iostream>
using namespace std;

int* moveZeroesToEnd(int arr[], int size){
    int cnt = 0;
    for(int i=0,j=0; i<size; i++){
        if(arr[i] != 0){
            arr[j++] = arr[i];
        }
        else
            cnt++;
    }
    for(int i=size-1; i>size-1-cnt; i--){
        arr[i] = 0;
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int *newArr = moveZeroesToEnd(arr, n);
    for(int i=0;i<n; i++)
        cout << arr[i] << " ";
    return 0;
}
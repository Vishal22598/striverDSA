#include<iostream>
using namespace std;
void rotateLeftByOne(int arr[], int size){
    int firstEle = arr[0];
    for(int i=1; i<size; i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = firstEle;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    rotateLeftByOne(arr, n);
    for(int i: arr)
        cout << i << " ";

    return 0;
}
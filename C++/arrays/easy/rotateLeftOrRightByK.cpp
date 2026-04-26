#include<iostream>
#include<bits/stdc++.h>
// #include<algorithm>
using namespace std;
void rotateOptimized(int arr[], int size, int k){
    k = k%size;
    reverse(arr, arr+k);
    reverse(arr+k, arr+size);
    reverse(arr, arr+size);
}
void rotateLeftOrRightByK(int arr[], int size, int k, string direction){
    k = k%size;
    int temp[k];
    if(direction == "left"){
        for(int i=0; i<k; i++)
            temp[i] = arr[i];
        
        for(int i=k; i<size; i++){
            arr[i-k] = arr[i];
        }
        for(int i=size-k, j=0; i<size; i++)
            arr[i] = temp[j++];

    }
    else{
        for(int i=size-k, j=0; i<size; i++)
            temp[j++] = arr[i];
        
        for(int i=size-1-k; i>=0; i--){
            arr[i+k] = arr[i];
        }

        for(int i=0; i<k; i++)
            arr[i] = temp[i];
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int k = 12;
    string direction = "left";
    // string direction = "right";
    // rotateLeftOrRightByK(arr, n, k, direction);
    rotateOptimized(arr, n, k);
    for(int i: arr)
        cout << i << " ";

    return 0;
}
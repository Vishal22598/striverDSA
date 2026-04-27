#include<iostream>
using namespace std;

void rotate(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = 2;
    rotate(arr, start, end);
    for(int i: arr)
        cout << i << " ";

    return 0;
}
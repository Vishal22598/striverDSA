#include<iostream>
using namespace std;

void checkSorted(int arr[], int size){
    bool isSorted = true;
    for(int i=1; i<size; i++){
        if(arr[i] < arr[i-1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted)
        cout << "array is sorted";
    else
        cout << "array is not sorted";
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++)
        cin >> arr[i];
    
    checkSorted(arr, n);
    return 0;
}
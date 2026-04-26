#include<iostream>
using namespace std;

void smallestLargestElementOfArray(int arr[], int size){
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for(int i=0; i<size; i++){
        if(arr[i] < smallest)
            smallest = arr[i];

        if(arr[i] > largest)
            largest = arr[i];
    }
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++)
        cin >> arr[i];
    
    smallestLargestElementOfArray(arr, n);
    return 0;
}
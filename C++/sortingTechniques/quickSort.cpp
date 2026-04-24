#include<iostream>
#include<vector>

using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i<j){
        while (arr[i] <= pivot && i<=high)
            i++;
        while(arr[j] > pivot && j>low)
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void  quickSort(int arr[], int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    // 13 46 24 52 20 8
    vector<int> vecArr;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        vecArr.push_back(arr[i]);
    }

    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << ", ";

    // insertionSort(vecArr);
    // for(int i: vecArr)
    //     cout << i << " ";
    
}
#include<iostream>
#include<vector>

using namespace std;
void merge(int arr[], int l, int m, int h){
    int temp[h-l+1];
    int left = l;
    int right = m+1;
    int k=0;
    while(left<=m && right <= h){
        if(arr[left] <= arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
        }
    }
    while(left <= m)
        temp[k++] = arr[left++];

    while(right <= h)
        temp[k++] = arr[right++];
        
    for(int i=l; i<=h; i++)
        arr[i] = temp[i-l];
}
void mergeSort(int arr[], int l, int h){
    if(l>=h)
        return;

    int m = (l+h)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, h);
    merge(arr, l, m, h);
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

    mergeSort(arr, 0, n-1);
    for(int i=0; i<n; i++)
        cout << arr[i] << ", ";

    // insertionSort(vecArr);
    // for(int i: vecArr)
    //     cout << i << " ";
    
}
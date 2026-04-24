#include<iostream>
#include<vector>

using namespace std;
void selectionSort(int arr[], int size){
   for(int i=0; i<size-1; i++){
    int minEleInd = i;
    for(int j=i+1; j<size; j++){
        if(arr[j] < arr[minEleInd])
            minEleInd = j;
    }
    int temp = arr[i];
    arr[i] = arr[minEleInd];
    arr[minEleInd] = temp;
   }
}
    

void selectionSort(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        int minInd = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[minInd])
                minInd = j;
        }
        int temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
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

    // selectionSort(arr, n);
    // for(int i=0; i<n; i++)
    //     cout << arr[i] << ", ";

    selectionSort(vecArr);
    for(int i: vecArr)
        cout << i << " ";
    
}
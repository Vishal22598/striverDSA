#include<iostream>
#include<vector>

using namespace std;
void bubbleSort(int arr[], int size){
    int c=0;
    bool sorted = true;
    for(int i=0; i<size-1 && sorted == false; i++){
        sorted = true;
        for(int j=0; j<size-i-1; j++){c++;
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = false;
            }
        }
        
        if(sorted == true){
            cout << c << endl;
            return;
        }
    }
}
    

void bubbleSort(vector<int> &arr){
    int c = 0;
    bool sorted;
    for(int i=0; i<arr.size()-1 && sorted == false; i++){
        sorted = true;
        for(int j=0; j<arr.size()-1-i; j++){c++;
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = false;
            }
        }
        if(sorted == true){
            cout << c << endl;
            return;
        }
        
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

    // bubbleSort(arr, n);
    // for(int i=0; i<n; i++)
    //     cout << arr[i] << ", ";

    bubbleSort(vecArr);
    for(int i: vecArr)
        cout << i << " ";
    
}
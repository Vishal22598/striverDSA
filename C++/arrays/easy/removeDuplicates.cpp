#include<iostream>
#include<unordered_set>
using namespace std;

void removeDuplicates(int arr[], int size){
    unordered_set<int> set;
    int k = 1;
    for(int i=1; i<size; i++){
        if(set.find(arr[i]) == set.end()){
            set.insert(arr[i]);
            arr[k++] = arr[i];
        }
        
    }
    cout << "cnt: " << k << endl;
    for(int i: set)
        cout << i << ", ";
}
int removeDup(int arr[], int size){
    int i=1;
    for(int j=1; j<size; j++){
        if(arr[j] != arr[i]){
            arr[i++] = arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n; i++)
        cin >> arr[i];
    
    // removeDuplicates(arr, n);
    cout << "uniq: " << removeDup(arr, n);
    cout << endl;
    for(int i: arr)
        cout << i << ", ";
    return 0;
}
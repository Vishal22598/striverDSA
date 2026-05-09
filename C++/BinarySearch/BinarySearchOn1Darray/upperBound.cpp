#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> arr, int key){
    int l=0, r=arr.size()-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(key < arr[mid])
            r = mid-1;
        else if(key > arr[mid])
            l = mid+1;
        else{
            int i=mid;
            while(i<=arr.size()-1 && arr[i] == arr[mid]){
                i++;
            }
            return i-1;
        }
    }
    return 0;
}

int binarySearch(vector<int> arr, int l, int r, int key){
    if(l>r)
        return 0;

    int mid= l+ (r-l)/2;
    if(key < arr[mid])
        return binarySearch(arr, l, mid-1, key);
    else if(key > arr[mid])
        return binarySearch(arr, mid+1, r, key);
    else{
            int i=mid;
            while(i<=arr.size()-1 && arr[i] == arr[mid]){
                i++;
            }
            return i-1;
        }
    return -1;
}
int main(){
    
    // vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    vector<int> arr = {1, 2, 2, 2, 2, 2, 4};
    int key=2;
    // int ind = binarySearch(arr, 0, arr.size()-1, key);
    int ind = bs(arr, key);
    if(ind != -1)
        cout << "lower bound of element " << key << " is: " << ind;
    else
        cout << "element " << key << " not present in given array";
    return 0;
}
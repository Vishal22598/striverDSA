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
        else
            return mid;
    }
    return -1;
}

int binarySearch(vector<int> arr, int l, int r, int key){
    if(l>r)
        return -1;

    int mid= l+ (r-l)/2;
    if(key < arr[mid])
        return binarySearch(arr, l, mid-1, key);
    else if(key > arr[mid])
        return binarySearch(arr, mid+1, r, key);
    else
        return mid;
    return -1;
}
int main(){
    
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int key=17;
    // int ind = binarySearch(arr, 0, arr.size()-1, key);
    int ind = bs(arr, key);
    if(ind != -1)
        cout << "element " << key << " present at index: " << ind;
    else
        cout << "element " << key << " not present in given array";
    return 0;
}
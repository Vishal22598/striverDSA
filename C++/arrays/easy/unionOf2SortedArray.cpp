#include<iostream>
#include<map>
#include<set>
#include<vector>

using namespace std;

map<int, int> unionOf2SortedArray(int arr1[], int arr2[], int n1, int n2){
    map<int, int> mpp;
    for(int i=0; i<n1; i++){
        mpp[arr1[i]] = ++mpp[arr1[i]];
    }
    for(int i=0; i<n2; i++){
        mpp[arr2[i]] = ++mpp[arr2[i]];
    }
    
    return mpp;
        

}

set<int> unionOf2SortedArray1(int arr1[], int arr2[], int n1, int n2){
    set<int> s;
    for(int i=0;i<n1; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<n2; i++){
        s.insert(arr2[i]);
    }
    return s;
}
vector<int> unionOf2SortedArray2(int arr1[], int arr2[], int n1, int n2){
    vector<int> v;
    int l=0, r=0;
    while(l<n1 && r<n2){
        int key;
        if(arr1[l]<arr2[r]){
            key = arr1[l];
            l++;
        }
        else if(arr1[l] == arr2[r]){
            key =arr1[l];
            l++;
            r++;
        }
        else{
            key = arr2[r];
            r++;
        }
        if(v.empty() || v.back() != key){
            v.push_back(key);
        }
    }
    while(l<n1){
        int key = arr1[l];
        if(v.empty() || v.back() != key){
            v.push_back(key);
        }
        l++;
    }

    while(r<n2){
        int key = arr2[r];
        if(v.empty() || v.back() != key){
            v.push_back(key);
        }
        r++;
    }
    return v;
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    for(int i=0;i<n1; i++){
        cin >> arr1[i];
    }

    for(int i=0;i<n2; i++){
        cin >> arr2[i];
    }

    vector<int> mpp = unionOf2SortedArray2(arr1, arr2, n1, n2);
    int size = mpp.size();
    int newArr[size];
    int i=0;
    for(int it: mpp){
        cout << it << ", "  << endl;
        newArr[i++] = it;
    }

    for(int i: newArr)
        cout << i << " ";
    cout << endl << "hello";
    return 0;
}
int main2(){
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    for(int i=0;i<n1; i++){
        cin >> arr1[i];
    }

    for(int i=0;i<n2; i++){
        cin >> arr2[i];
    }

    set<int> mpp = unionOf2SortedArray1(arr1, arr2, n1, n2);
    int size = mpp.size();
    int newArr[size];
    int i=0;
    for(int it: mpp){
        cout << it << ", "  << endl;
        newArr[i++] = it;
    }

    for(int i: newArr)
        cout << i << " ";
    cout << endl << "hello";
    return 0;
}
int main1(){
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    for(int i=0;i<n1; i++){
        cin >> arr1[i];
    }

    for(int i=0;i<n2; i++){
        cin >> arr2[i];
    }

    map<int, int> mpp = unionOf2SortedArray(arr1, arr2, n1, n2);
    int size = mpp.size();
    int newArr[size];
    int i=0;
    for(auto it: mpp){
        cout << it.first << ", " << it.second << endl;
        newArr[i++] = it.first;
    }

    for(int i: newArr)
        cout << i << " ";
    cout << endl << "hello";
    return 0;
}
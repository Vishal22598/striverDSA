#include<iostream>
#include<vector>
#include<cmath>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    unordered_map<int, int> mpp;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        mpp[num]++;
    }

    cout << "frequency of each num" << endl;

    for(auto it: mpp){
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}

int main2(){
    int n;
    cin >> n;
    map<int, int> mpp;

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        mpp[num]++;
    }

    cout << "frequency of each num" << endl;

    for(auto it: mpp){
        cout << it.first << " : " << it.second << endl;
    }
}

int main1(){
    cout << "using custom hashing" << endl;
    int n;
    cin >> n;
    int hash[16] = {0};

    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        hash[num]++;
    }

    for(int i=0; i<16; i++){
        if(hash[i] > 0)
            cout << i << " : " << hash[i] << endl;
    }
    return 0;
}

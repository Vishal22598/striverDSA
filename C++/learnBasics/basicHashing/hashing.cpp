#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    //precomputing
    // max number query for can be 12 so to get 12 as index i need 12 size arr
    int hash[13] = {0};
    for(int i: arr)
        hash[i] += 1;
    
    cin >> n;
    for(int i=0; i<n; i++){
        //fetching
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}#include<iostream>
#include<vector>
#include<cmath>
#include<map>

using namespace std;

int main1(){
    int alphabet[26] = {0};
    string str;
    cin >> str;
    for(char c: str){
        alphabet[c-'a'] += 1;
    }

    for(int i = 0; i<26; i++){
        if(alphabet[i]>0)
            cout << (char)(i+97) << " : " << alphabet[i] << endl;
    }
    return 0;
}

int main2(){
    int character[256] = {0};
    string str;
    cin >> str;

    for(char c : str){
        character[c] += 1;
    }
    for(int i=0; i<256; i++){
        if(character[i] > 0)
            cout << i << ": " << (char)i << " : " << character[i] << endl;
    }
    return 0;
}

int main3(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    //precompute
    map<int, int> m;
    for(int i: arr){
        m[i]++;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
    //fetch
    cout << num << " : " << m[num] << endl;

    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        mpp[num]++;
    }

    for(auto it : mpp){
        cout << it.first << " : " << it.second << endl;
    }

    cout << endl << "check occurence:" << endl;
    int q; 
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << num << " : " << mpp[num] << endl;
    }
    return 0;
}
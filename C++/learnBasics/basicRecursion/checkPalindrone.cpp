#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class Solution{
    public:
    string checkPalindrome(string str){
        int len = str.length();
        for(int i=0; i<len/2; i++){
            if(str[i] != str[len-1-i])
                return "Not Palindrome";
        }
        return "Palindrome";
    }

    string checkPalindrome(string str, int start, int end){
        if(start > end)
            return "Palindrome";
        
        if(str[start] != str[end]){
            return "Not Palindrome";
        }
        return checkPalindrome(str, start+1, end-1);
    }
};
int main(){
    cout << "palindrome of string" << endl;
    string str;
    cin >> str;

    Solution sol;
    // cout << str << " is: " << sol.checkPalindrome(str);
    string result = sol.checkPalindrome(str, 0, str.length()-1);
    cout << "check using Recursion function " << str << " is :" << result;
    return 0;
}
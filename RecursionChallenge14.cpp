// Print all possible words from phone digits.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

string phonepadvalues[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void PossibleWordGenerator(string s, string ans){
    if(s.length() == 0 ){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string value = phonepadvalues[ch - '0'];
    string ros = s.substr(1);
    
    for(int i=0; i<value.length(); i++){
        PossibleWordGenerator(ros, ans+value[i]);
    }
}

int main(){
    // string s;
    // getline(cin, s);
    // string ans = "";
    PossibleWordGenerator("23", "");
    return 0;
}
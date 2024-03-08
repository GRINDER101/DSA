// Generate substrings with ASCII number from a string.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void SubstringsGenerator(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int value = ch;
    string reststr = str.substr(1);
    
    SubstringsGenerator(reststr, ans);
    SubstringsGenerator(reststr, ans + ch);
    SubstringsGenerator(reststr, ans + to_string(value));
}

int main(){
    SubstringsGenerator("AB", "");
    return 0;
}
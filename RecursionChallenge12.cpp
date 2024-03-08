// Generate all substrings of a string.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void SubstringsGenerator(string str, string ans){
    if(str.length()== 0){
        cout << ans << endl;
        return;
    }

    char character = str[0];
    string restString = str.substr(1);

    SubstringsGenerator(restString, ans);
    SubstringsGenerator(restString, ans+character);
    
}

int main(){

    SubstringsGenerator("ABC", "");
    return 0;
}
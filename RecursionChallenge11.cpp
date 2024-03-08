// Move all x to the end of the string

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

string XElementMover(string str){
    if(str.length() == 0){
        return "";
    }

    char character = str[0];
    string ans = XElementMover(str.substr(1));
    if(character == 'x'){
        return (ans+character);
    }
    return (character+ans);
}

int main(){
    string str;
    getline(cin, str);

    // XElementMover(str);
    cout << XElementMover(str) << endl;
}
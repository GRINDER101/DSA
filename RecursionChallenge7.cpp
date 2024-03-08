// Reverse a string using recursion

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void Reverse_a_String(string n){
    if(n.length()== 0){
        return;
    }
    string subString = n;
    Reverse_a_String(subString.substr(1));
    cout << subString[0];
}

int main(){
    string n;
    getline(cin, n);

    Reverse_a_String(n);
    cout << endl;
    return 0;
}
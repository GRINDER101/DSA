// Print all permutation of a string.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void PermutationGenerator(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        PermutationGenerator(ros, ans+ch);
    }
}

int main(){
    PermutationGenerator("ABC","");
    return 0;
}
// Remove all the duplicates from the string.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

string DuplicateRemover(string str){
    if(str.length() == 0){
        return "";
    }
    char word = str[0];
    
    string ans = DuplicateRemover(str.substr(1));
    
    if(word == ans[0]){
        return ans;
    }
    return word+ans;
}

int main(){
    string str;
    getline(cin, str);

    cout<< DuplicateRemover(str) << endl;
}
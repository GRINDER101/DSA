// Replace pi with 3.14 in string

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void ReplacePi(string str){
    if(str.length() == 0){
        return;
    }

    if(str[0] == 'p' && str[1] == 'i'){
        cout << "3.14";
        ReplacePi(str.substr(2));
    }else{
        cout << str[0];
        ReplacePi(str.substr(1));
    }
}

int main(){
    string str;
    getline(cin, str);

    ReplacePi(str);
    cout << endl;
    return 0;
}
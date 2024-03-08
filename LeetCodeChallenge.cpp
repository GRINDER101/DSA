// Task is to find two words have same exact chracters
// or not, return true or false.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    // char firstword[20];
    // char secondword[20];

    // cin.getline(firstword, sizeof(firstword));
    // cin.getline(secondword, sizeof(secondword));

    // for(int i=0; i<strlen(firstword); i++){
    //     for(int j=0; j<strlen(secondword); j++){
    //         if(firstword[i] == secondword[j]){
    //             secondword[i] = '\0';  
    //         }
    //     }
    // }
    // if(secondword[0] == ' ' || secondword[0] == '\0'){
    //     cout << "true" << endl;
    //     return 0;
    // }else{
    //     cout << "false" << endl;
    //     return 0;
    // }

    string firstword;
    string secondword;

    getline(cin, firstword);
    getline(cin, secondword);
    sort(firstword.begin(), firstword.end());
    sort(secondword.begin(), secondword.end());
    if(firstword == secondword){
        cout << "true" << endl;
        return 0;
    }else{
        cout << "false" << endl;
        return 0;
    }
}
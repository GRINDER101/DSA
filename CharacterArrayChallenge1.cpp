// Task is to find the largest word in a sentence.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main(){
    char arr[100];

    cin.getline(arr, sizeof(arr));
    // cin.ignore();

    int wordcount = 0;
    int startingcounter = 0;
    int sum = 0;
    int start = 0;
    int end = 0;

    for(int i=0; i<=strlen(arr); i++){;
        wordcount+=1;
        if(arr[i] == '\0' || arr[i] == ' '){
            wordcount--;
            if(sum < wordcount){
                start= startingcounter;
                end = i - 1;
                sum = 0;
                sum = wordcount;
                wordcount = 0;
            }
            startingcounter = i + 1;
        }
    }
    for(int i=start; i<=end; i++){
        cout << arr[i];
    }
    cout << endl;
}
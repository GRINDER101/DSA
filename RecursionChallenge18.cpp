// Given a "2*n" board and tiles of size "2*1",
// count the number of ways this tile can be placed.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int FindNumberofPossibleWays(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    return (FindNumberofPossibleWays(n-1) + FindNumberofPossibleWays(n-2));
}

int main(){
    cout << FindNumberofPossibleWays(4) << endl;
}
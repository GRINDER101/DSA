// Count the number of possible paths from start point 
// to end point in a gameboard.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

bool flag = true;

int FindNumberofPossiblePaths(int start, int end, int ans){
    if(start > end){
        return 0;
    }
    if(start == end && flag){
        cout << ans+1 << endl;
        flag = false;
        return 0;
    }
    for(int i=1; i<=6; i++){
        FindNumberofPossiblePaths(start+i, end, ans+1);  
    }
    return 0;
}

int main(){
    FindNumberofPossiblePaths(0, 3, 0);
    return 0;
}
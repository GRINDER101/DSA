// Count the number of paths possible in a maze.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int NumberofPathsCounter(int n, int i, int j){
    if(i == n-1 && j == n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return (NumberofPathsCounter(n, i+1, j) + NumberofPathsCounter(n, i, j+1));

}

int main(){

    cout << NumberofPathsCounter(3, 0, 0) << endl;

}
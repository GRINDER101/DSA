// Tower of Hanoi Challenge

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

void towerofHanoi(int n, char departure, char destination, char helper){
    if(n == 0){
        return;
    }
    towerofHanoi(n-1, departure, helper, destination);
    cout << "Moved from " << departure << " to " << destination << n << endl;
    towerofHanoi(n-1, helper, destination, departure);
}

int main(){
    int n;
    cin >> n;
    char departure, destination, helper;
    cin >> departure >> destination >> helper;
    towerofHanoi(n, departure, destination, helper);
}
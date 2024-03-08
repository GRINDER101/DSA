// Task is to print the nth Fibonacci number.

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int Fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }
    int sum = Fibonacci(n-1) + Fibonacci(n-2);
    return sum;
}

int main(){
    int n;
    cin >> n;

    cout << Fibonacci(n) << endl;
}
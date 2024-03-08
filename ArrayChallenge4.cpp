// We need to find the number of record breaking days.
// The definition of record breaking days is where the number
// of visitor on the day is strictly larger than the number
// of visitors on each of the previous day and also the first
// day can be a record breaking day.
// Let's take a test case of a simple Array = [10, 7, 4, 6, 8, 10]
// Here the number of record breaking days are 4.

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int numberofDays = 0;
    int previousDayVisitor = arr[0];
    int j = 1;

    if(arr[0] > arr[1]){
        numberofDays++;
    }
    while(j<n){
        if(previousDayVisitor < arr[j]){
            numberofDays++;
            previousDayVisitor = arr[j];
        }
        j++;
    }

    cout << "the number of record breaking days are " << numberofDays << endl;

}
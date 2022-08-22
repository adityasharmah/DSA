// Basic Of array in C++

#include<iostream>
using namespace std;

int main(){
    
    int n; // number of elements in an array.
 
    int arr[n];  // creating an array 

    cout << "Enter the number of elements";
    cin >> n;

    //for input in array
    for(int i = 0; i <= n; i++){
        cin >> arr[i];
        arr[i] = arr[i] * 2; 
    }

    //for output of array
    for(int i = 0; i <= n; i++){
        cout << arr[i] << endl ;
    }


}
#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int key){
    for (int i=0;i<n;i++){
        if (arr[i]==key){
            cout << "Element found at index " << i << endl;
        }
    }
    cout << "Element not found" << endl;
}

int main(){

    int n;
    cout << "ADITYA SHARMA 203-IT-B"<< endl;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int val1;
    cout << "Enter the value to be searched: ";
    cin >> val1;
  
    linearSearch(arr,n,val1);
}
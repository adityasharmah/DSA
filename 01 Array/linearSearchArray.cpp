// Linear Search In A Array


#include <iostream>
using namespace std;

// Creating a function to implement array
int linearSearch(int arr[], int  n, int data){

    for(int i = 0; i <= n; i++){
        if(arr[i] == data ){
            return i;
        }
    }
    return -1;
}

int main() {

	int arr[] = { 1,2, 6, 8, 5, 67 , 34 , 56, 78};

    int n = sizeof(arr) / sizeof(int);
    int data;
    cin >> data ;
    
    int index = linearSearch(arr , n, data);
    
    if(index != -1)
    {
        cout << data << " is present at index " << index;
    }
    else{
        cout << "NOT FOUND";
    }
	return 0;
}


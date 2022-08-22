
#include <iostream>
using namespace std;

 // Function to reverse an array
void reverseArray(int arr[], int n){

    int start = 0;                                                              // start index of the array
    int end = n - 1;                                                            // end index of the array
    int temp;                                                                   

    while(start < end){                                                         // loop to swap the elements of the array
        temp = arr[start];                                                      // swap the elements
        arr[start] = arr[end];                                                  
        arr[end] = temp;

        start++;                                                                // increment the start index
        end--;                                                                  // decrement the end index
    }
}

// Function to print an array
void printArray(int arr[], int n){

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver program to test above functions
int main() {

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr,n);
    reverseArray(arr,n);
    printArray(arr,n);

	return 0;
}


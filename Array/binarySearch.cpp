// Implementing Binary Search Using Array
#include <iostream>
using namespace std;

// Creating Function Of Binary Search
int binarySearch(int arr[],int n, int data){

    int start = 0;                                       // Initializing Start Index
    int end = n - 1;                                     // Initializing End Index

    while (start <= end)                                 // Loop Until start Index is less than or equal to end index
    {
        int mid = (start + end) / 2;                     // Calculating Mid Index

        if(arr[mid] == data){                            // If Data is Equal to Mid Index
            return mid;
        }
        else if(arr[mid] > data){                        // If Data is Greater Than Mid Index
            end = mid - 1;
        }
        else{                                            // If Data is Less Than Mid Index
            start = mid + 1;
        }
    }
    return -1;                                           // Return -1 If Data is Not Found
}

// Main Function
int main() {      
    

	int arr[] = {1,2,3,4,5,6,7};                         // Initializing Array
    int n = sizeof(arr) / sizeof(int);                   // Calculating Size Of Array

    int data;                
    cin >> data;
   

    int index = binarySearch(arr,n,data);               // Calling Function Of Binary Search

    if(index != -1){                                    // If Index is Not Equal to -1
        cout << data << " is present at index " << index;   
    }
    else{                                              // If Index is Equal to -1
        cout << "NOT FOUND";
    }

	return 0;
}


#include <iostream>
using namespace std;

// Function to print all subarrays
int printAllSubArray(int arr[], int n){
    // Pick starting point
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k < j; k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
    return 0;
}

// Driver Code
int main() {
	
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);

    // Function Call
    printAllSubArray(arr,n);


	return 0;
}
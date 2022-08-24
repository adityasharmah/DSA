#include <iostream>
using namespace std;

// Function to print all pairs in an array
int printAllPair(int arr[], int n){
    
    for(int idx = 0; idx <= n; idx++){                                          
        int x = arr[idx];                                           

        for(int jdx = idx + 1 ; jdx < n; jdx++){
            int y = arr[jdx];

            cout << x << "," << y <<endl;;
        }
        cout << endl;
    }
    return 0;
}

int main() {
	
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);

    printAllPair(arr,n);


	return 0;
}
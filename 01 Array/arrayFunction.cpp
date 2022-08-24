
#include <iostream>
using namespace std;

// creating a function to print array
int printArray(int* arr, int n)
{
    
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " , ";
    }
    return 0;
}

int main() {
	

    int array[] = {1,2,3,4,5,6};  // Creating array
    
    int n = sizeof(array) / sizeof(int); // Finds total elements in array

    cout << n << endl;

    printArray(array,n); // Function Calling

	return 0;
}


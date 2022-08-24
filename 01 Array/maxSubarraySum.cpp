
#include <iostream>
using namespace std;

// Brute force approach
int maxSubArraySum(int arr[], int n){                                        
    int largestSubArraySum = 0;  // Initialize max sum
    
    
    for(int i = 0; i < n; i++){                                    // Loop through the array
        for(int j = i; j < n; j++){                                // Loop through the subarray
            int subArraySum = 0;                                   // Initialize subarray sum
            for(int k = i; k <= j; k++){                         
                subArraySum += arr[k];                             // Add elements of subarray to subarray sum
            }
           largestSubArraySum = max(largestSubArraySum,subArraySum); // Update largest subarray sum
        }
    }
    return largestSubArraySum ;
}

int main() {
	
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr) / sizeof(int);

    cout << maxSubArraySum(arr,n);


	return 0;
}


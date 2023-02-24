// factorial till n


#include <iostream>
using namespace std;

// factorial of n = n * factorial of n-1
int factorial(int n)
{
    int fact = 1;
    while(n != 0)
    { 
       fact = fact * n;
        n--;
    }
    return fact;
}


// factorial of n = n * factorial of n-1
int main() {
	int n;
    cin >> n;

    int result = factorial(n);
    cout << result;
	return 0;
}


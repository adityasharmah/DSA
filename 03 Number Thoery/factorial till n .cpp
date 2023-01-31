 

#include <iostream>
using namespace std;

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



int main() {
	int n;
    cin >> n;

    int result = factorial(n);
    cout << result;
	return 0;
}


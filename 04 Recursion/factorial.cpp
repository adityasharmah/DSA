// factorials using recursion
#include<bits/stdc++.h>
using namespace std;

// factorial of n = n * factorial of n-1
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int fnm1 = factorial(n-1);
    int fn = n*fnm1;
    return fn;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}


#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int idx = 0; idx <= n; idx++)
    {
        cin>>arr[idx];
    }
    
    int max = arr[0];
    for(int idx = 1; idx < n; idx++)
    {
        if(arr[idx] > max)
        {
            max = arr[idx];
        }
    }
    
    
    for ( int col = max; col  >= 1; col--)
    {
        for ( int row = 0;  row < n; row++)
        {
            if(arr[row] >= col)
            {
                cout<<"*	";
            }
            else{
                cout<<"	";
            }
        }
        cout<<endl;
    }
    
    
return 0;
    
}
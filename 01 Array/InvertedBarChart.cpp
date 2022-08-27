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
    
    int max = arr[n];
    for(int idx = 0; idx < n; idx++)
    {
        if(arr[idx] > max)
        {
            max = arr[idx];
        }
    }

    // Inverted Bar Chart
    for ( int col = 0; col  < max ; col++)
    {
        for ( int row = 0;  row < n; row++)
        {
            if(col < arr[row])
            {
                cout<<"*\t";
            }
            else{
                cout<<"	";
            }
        }
        cout<<endl;
    }
    
    
return 0;
    
}
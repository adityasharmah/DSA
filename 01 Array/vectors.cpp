 // vector is a dynamic array which can be resized at run time.
 // vector is a template class which is defined in header file <vector>
 // vector is a class which is defined in std namespace.

 
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // 
    vector<int> array;
    
    // Inserting element in vector 
    for(int idx = 0; idx < 5; idx++)
    {
        array.push_back(idx);
    }

    for(int idx = 0; idx < 5; idx++)
    {
        cout << array[idx] << " ";
    }
    cout << endl; 

    cout << "Size of Array : " << array.size(); // size() function will returns how many elements in array
    cout << endl;

    cout << "Capacity of array : "<< array.capacity(); // capacity() function will returns total space for element in vectors.
    cout << endl;

    vector<int> vec;
    
    
    
   
    cout << "push_back"<<endl;
    // push_back modifier
    vec.push_back(15);
    vec.push_back(12);
    vec.push_back(23);
    vec.push_back(19);
    vec.push_back(67);
    for(int idx = 0; idx < vec.size(); idx++)
    {
        cout << vec[idx] <<" "; 
    }
    
    cout << endl;
    cout << "pop_back"<<endl;

    // pop_back modifier
    vec.pop_back();
    for(int idx = 0; idx <= vec.size(); idx++)
    {
        cout << vec[idx] <<" "; 
    }
    cout <<endl;
    cout << "insert modifier" << endl;
    // insert modifier 
    vec.insert(vec.begin(),3);
    for(int idx = 0; idx <= vec.size(); idx++)
    {
        cout << vec[idx] <<" "; 
    }
   
   
    
    return 0;
    
}
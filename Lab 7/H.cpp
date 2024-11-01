#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    int arr[a];
    set<int> arr1;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr[i] = b;
        arr1.insert(b);
    }
    int counter = 0;

    for (int i: arr1)
    {
        counter = 0;
        for (int ii = 0; ii < a; ii++)
        {
            if (i == arr[ii])
            {
                counter++;
            } 
            
        }
    if (counter < 2)
    {
        cout << i;
    }
    
        
    }
    
    
}
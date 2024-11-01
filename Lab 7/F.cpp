#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        int counter = 1;
        int max = arr[l];
        for (int i = l+1; i <= r; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                counter++;
            }
            
        }
     cout << counter << endl;   
    }



    
    

}
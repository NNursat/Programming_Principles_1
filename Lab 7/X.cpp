#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

int main(){ 
    int a, b;
    cin >> a;
    string temp;
    vector<string> arr;
    vector<string> arr1;
    set<string> arr2;
    for (int i = 0; i < a; i++)
    {
        cin >> temp;
        arr.push_back(temp);
        arr2.insert(temp);
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> temp;
        arr1.push_back(temp);
        arr2.insert(temp);
    }
    auto iter = arr.cbegin();
    for (int i = 0; i < b; i++)
    {
        for (int ii = 0; ii < a; ii++)
        {
            if (arr1[i] == arr[ii])
            {
                arr2.erase(arr[ii]);
            }
        }
        
    }

    // reverse(arr.begin(), arr.end());
    
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }
    
    for (string i : arr2)
    {
        cout << i << endl;
    }
    
    
      
}
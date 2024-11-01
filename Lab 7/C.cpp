#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr;
    vector<int> arr1;
    int num = 1;
    while (num != 0)
    {
        cin >> num;
        arr.push_back(num);
    }
    arr.pop_back();
    arr1 = arr;

    reverse(arr.begin(), arr.end());
    vector<int> arr3;
    int sum;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = arr[i] + arr1[i];
        arr3.push_back(sum);
    }
    


    int last_digit = 0;



    if (arr.size() % 2 == 0)
    {
        for (int i = 0; i < arr3.size() / 2; i++)
        {
            cout << arr3[i] << " ";
        }
    } else {
        for (int i = 0; i < arr3.size() / 2; i++)
        {
            cout << arr3[i] << " ";
            
        }
        last_digit = arr3[arr3.size() / 2] / 2;     
        cout << last_digit;   
    }
    
    

}
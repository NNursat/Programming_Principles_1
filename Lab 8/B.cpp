#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr_odd;
    vector<int> arr_even;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp % 2 == 0)
        {
            arr_even.push_back(temp);
            continue;
        }
        arr_odd.push_back(temp);
        
    }

    sort(arr_even.begin(), arr_even.end());
    sort(arr_odd.begin(), arr_odd.end());
    reverse(arr_even.begin(), arr_even.end());


    for (int i = 0; i < arr_even.size(); i++)
    {
        cout << arr_even[i] << " ";
    }

    for (int i : arr_odd)
    {
        cout << i << " ";
    }
}
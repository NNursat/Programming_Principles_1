#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    vector<int> arr1;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr1.push_back(b);
    }
    bool tf = false;
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i <= a; i++)
    {
        tf = false;
        for (int ii = 0; ii < a; ii++)
        {
            if (i == arr1[ii])
            {
                tf = true;
                break;
            }
        }
        if (tf == true) {
            continue;
        } else {
            cout << i;
            return 0;
        }
    }
    
    
}
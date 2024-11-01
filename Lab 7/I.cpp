#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a;

    vector<int> arr_int;
    vector<string> arr_str(a, "YES");

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr_int.push_back(b);
    }

    for (int i = 0; i < a; i++)
    {
        for (int ii = i + 1; ii < a; ii++)
        {
            if (arr_int[i] == arr_int[ii])
            {
                arr_str[ii] = "NO";
            }
            
        }
        
    }

    for (string i : arr_str) {
        cout << i << endl;
    }


}
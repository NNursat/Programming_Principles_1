#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    set<int> arr;
    vector<int> arr1;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr.insert(b);
        arr1.push_back(b);
    }

    if (arr1.size() == arr.size())
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    


    
    
}
#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int a;
    string b;
    cin >> a;
    set<string> arr;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr.insert(b);
    }

    cout << arr.size();
    
}
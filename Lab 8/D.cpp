#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr;

    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num; 
        arr.push_back(num);
    }
    int counter = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == m)
        {
            counter++;
        }
        
    }

    cout << counter;
    
    

    return 0;
}


#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int num;
    cin >> num;
    map<string, int> arr;
    string x;
    for (int i = 0; i < num; i++)
    {
        cin >> x;
        arr[x] += 1;
    }
    int counter = 0;
    for (map<string, int> :: iterator it = arr.begin(); it != arr.end(); ++it){
        if (it->second == 3)
        {
            counter++;
        }
        
    }

    cout << counter;


    
    
}
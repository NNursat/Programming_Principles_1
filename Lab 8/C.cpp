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

    map<int, int> arr;
    int key;
    for(int i = 0; i < n; i++){
        cin >> key;
        arr[key] += 1;
    }

    int counter = 0;
    for(map<int, int> :: iterator it = arr.begin(); it != arr.end(); ++it){
        int key = it->first;
        int occurs = it->second;
        if(occurs >= 2){
            counter += 1;
        }
    }
    cout << counter;
    return 0;
}

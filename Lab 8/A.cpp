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

    // map<int, int> arr;
    vector<pair<int, int>> arr;
    int x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i].first << " ";
        cout << arr[i].second << endl;
    }
    

    // for (map<int, int> :: iterator it = arr.begin(); it != arr.end(); ++it){
    //     cout << it->first << " ";
    //     cout << it->second << endl;
    // }    

}
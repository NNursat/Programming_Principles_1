#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <unordered_map>


using namespace std;

int main(){
    int n;
    cin >> n;

    string k;
    int v;
    vector<pair<string, int>> karta;
    for(int i = 0; i < n; i++){
        cin >> k >> v;

        karta[i][k] = v;
    }


}

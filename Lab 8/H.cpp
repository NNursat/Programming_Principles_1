#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int main(){
    int num;
    cin >> num;
    map<string, int> arr;
    string k;
    int v;
    for (int i = 0; i < num; i++)
    {
        cin >> k;
        if( !arr.count(k) ){
            arr[k] = i+1;
        }
    }

    for (map<string,int> :: iterator it = arr.begin(); it != arr.end(); ++it){
        cout << it->first << " ";
        cout << it->second << endl;
    } 
    

}
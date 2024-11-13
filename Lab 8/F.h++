#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;

int main(){
    stack<char> steak;
    string a;
    cin >> a;

 for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            steak.push('(');
        } else if (a[i] == ')') {
            if (steak.empty()) {
                cout << "NO";
                return 0;
            }
            steak.pop();
        }
    }

    if (steak.empty()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
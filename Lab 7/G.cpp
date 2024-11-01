#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <iomanip>
using namespace std;

void noc(int n, int m){
    int sum = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum = sum + num;
    }
    sum = sum / n;
    sum = sum - m;
    cout << abs(sum);
}
int main() {
    int n, m;
    cin >> n >> m;
    noc(n, m);
    return 0;
}
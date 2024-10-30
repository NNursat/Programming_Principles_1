#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    if (a % 4 == 0 and a % 100 != 0 or a % 400 == 0) {
        cout << "yes";
    } else {
        cout << "No";
    }

}
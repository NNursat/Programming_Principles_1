#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{
    vector<long long> numbers;
    string input_line;
    
    getline(cin, input_line);

    stringstream ss(input_line);
    long long number;
    while (ss >> number) {
        numbers.push_back(number); 
    }

    set<long long> set_num(numbers.begin(), numbers.end());

    cout << set_num.size();
    
}
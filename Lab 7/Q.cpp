 #include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <unordered_set>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
  int a;
  cin >> a;
  double points;
  map<string, double> list;
  string key;
  double value;

  for (int i = 0; i < a; i++)
  {
    cin >> key >> value;
    points += value;
    list[key] += value;
  }
  
  vector<pair<string, double>> stdpoint(list.begin(), list.end());

  for (auto& pair: stdpoint)
  {
    pair.second = pair.second * 100 / points;
  }
  
  sort(stdpoint.begin(), stdpoint.end(),
    [](const pair<string, double>& a, const pair<string, double>& b) {
      if (a.second == b.second)
      {
        return a.first > b.first;
      }
      else{
        return a.second > b.second;
      }});

  for (const auto& result: stdpoint)
  {
    cout << result.first << " ";
    cout << result.second << "%" << endl;
  }
  return 0;
}
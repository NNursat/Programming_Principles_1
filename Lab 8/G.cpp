#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a;
    cin >> a;
    vector <int> n;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        if(temp > 0){
            n.push_back(temp);
        }
    }
    
    int c;
    int min=n[0];
    for (int i = 0; i < n.size(); i++){
        if(min < n[i+1]){
           min = n[i];
        }
    }
    cout << min;
    return 0;
}
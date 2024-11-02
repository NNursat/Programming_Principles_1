#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    set<string> arr1;
    vector<string> arr2;
    string b;
    
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        arr1.insert(b);
    }
    int counter = 0;
    int counter1 = 0;
    int counter2 = 0;
    string letter;
    for (string i: arr1) 
    {
        letter = i;
        counter = 0;
        counter1 = 0;
        counter2 = 0;
        for (int ii = 0; ii < letter.length(); ii++)
        {
            if (isupper(letter[ii]))
            {
                counter++;
            } else if (islower(letter[ii])) {
                counter1++;
            } else if (isdigit(letter[ii])){
                counter2++;
            }
            
        }
        if (counter > 0 and counter1 > 0 and counter2 > 0)
        {
            arr2.push_back(i);
        }   
    }
            
        cout << arr2.size() << endl;
        for (string i: arr2)
        {
            cout << i << endl;
        }

}



        
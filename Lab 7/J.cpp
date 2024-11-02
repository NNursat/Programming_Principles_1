    #include <iostream>
    #include <vector>
    #include <set>
    #include <cstdlib>
    #include <algorithm>
    #include <sstream>
    using namespace std;

    int main()
    {
        string s;
        getline(cin, s);

        string a;
        getline(cin, a);

        vector<int> V;
        string temp = "";
        for(char i : s){
            if(i == ' '){
                V.push_back(stoi(temp));
                temp = "";
            }
            temp += i;
        }
        
        if(!temp.empty()){
            V.push_back(stoi(temp));
            temp = "";
        }

        for(char i: a){
            if(i == ' '){
                V.push_back(stoi(temp));
                temp = "";
            } else {
                temp += i;
            }
        }

        if(!temp.empty()){
            V.push_back(stoi(temp));
            temp = "";
        }

        set<int> un;
        for(int i: V){
            un.insert(i);
        }


        cout << un.size();
    }
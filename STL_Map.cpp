#include <bits/stdc++.h>
using namespace std;

int main() {

    //map<key, val> variable_name;
    map<string, int> mp;
    mp["Tamim"] = 10;
    mp["Hamim"] = 10;
    mp["Ramim"] = 100;
    mp["Samim"] = 1000;

    for(auto it = mp.begin(); it!=mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("Hamim")){
        cout << mp["Hamim"];
    }

    return 0;
}
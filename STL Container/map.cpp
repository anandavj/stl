#include <map>
#include <vector>
#include <iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)

using namespace std;

int main() {

    // map<int,int> map_data;
    // int n; cin>>n;
    // REP(i,0,n) {
    //     int x; cin>>x;
    //     map_data[x]++;
    // }
    // cout << "KEY" << "\t->\t" << "Value" << "\n";
    // for(map<int,int>::iterator mapItr=map_data.begin(); mapItr!=map_data.end(); mapItr++) {
    //     cout << mapItr->first << "\t->\t" << mapItr->second << "\n";
    // }

    // cout << endl;

    map<string,int> map_string;
    vector<string> data = {"Ananda","Prabu","Tritya","Vijaya", "Ananda"};
    REP(i,0,data.size()) {
        map_string[data[i]]++;
    }

    cout << "KEY" << "\t->\t" << "Value" << "\n";
    for(map<string,int>::iterator mapItr=map_string.begin(); mapItr!=map_string.end(); mapItr++) {
        cout << mapItr->first << "\t->\t" << mapItr->second << "\n";
    }

    auto it = map_string.find("Ananda");
    // map_string.erase(it);
    map_string["Ananda"]--;

    cout << endl;

    cout << "KEY" << "\t->\t" << "Value" << "\n";
    for(map<string,int>::iterator mapItr=map_string.begin(); mapItr!=map_string.end(); mapItr++) {
        cout << mapItr->first << "\t->\t" << mapItr->second << "\n";
    }

    return 0;

}
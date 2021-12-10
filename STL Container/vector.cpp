#include <vector>
#include<iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)

using namespace std;

int main() {
    vector<int> vec;
    int n; cin>>n;
    REP(i,0,n) {
        int x; cin>>x;
        vec.push_back(x*i);
    }

    for(auto i:vec) cout << i << " ";
    cout<<"\n";

    vector<int>::iterator vecItr;

    for (vecItr=vec.begin(); vecItr!=vec.end(); vecItr++) {
        cout<<*vecItr<<" ";
    }
    cout<<"\n";

    for (auto vecRitr=vec.rbegin(); vecRitr!=vec.rend(); vecRitr++) {
        cout<<*vecRitr<<" ";
    }
}
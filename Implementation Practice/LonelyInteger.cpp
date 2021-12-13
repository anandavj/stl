#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int,int> a;
    int n;cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        a[x]++;
    }
    
    map<int,int>::iterator itr;
    for(itr=a.begin(); itr!=a.end(); itr++) {
        if(itr->second==1) cout<<itr->first<<"\n";
    }
    
    return 0;
}

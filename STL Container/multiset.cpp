#include <set>
#include <iostream>

using namespace std;

void printMset(multiset<int> mset, string setName) {
    cout<< setName << ": ";
    if(mset.size()==0) {
        cout << "EMPTY SET" << "\n\n";
        return;
    }
    for(auto it:mset) cout<<it<<" ";
    cout<<"\n\n";
}

int main() {

    multiset<int> mset;
    mset.insert(2);    
    mset.insert(2);
    printMset(mset,"mset");
    cout<< "SIZE & MAX SIZE: " <<mset.size() << " " << mset.max_size() << "\n\n";
    multiset<int> mset2{10,2,3,4,5};
    printMset(mset2,"mset2");
    swap(mset2,mset);
    printMset(mset,"mset");
    printMset(mset2,"mset2");
    mset.erase(mset.begin(),mset.end());
    printMset(mset,"mset");

    return 0;

}
#include <set>
#include <iostream>

using namespace std;

void printSet(set<int> x, string setName) {
    cout<< setName << ": ";
    if(x.size()==0) {
        cout << "EMPTY SET" << "\n\n";
        return;
    }
    for(auto it:x) cout<<it<<" ";
    cout<<"\n\n";
}

int main() {

    set<int> x;
    x.insert(2);
    x.insert(2);
    printSet(x,"x");
    set<int> y{4,1,2,3,7,10,2};
    printSet(y,"y");
    y.erase(y.begin(),y.end());
    printSet(y,"y");
    swap(x,y);
    printSet(x,"x");
    printSet(y,"y");
    x.insert({4,12,6,1,58});
    cout << *x.find(1);

    return 0;

}
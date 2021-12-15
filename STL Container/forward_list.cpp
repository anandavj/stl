#include <forward_list>
#include <iostream>

using namespace std;

void printFl(forward_list<int> fl, string flName) {
    cout << flName << ": ";
    for(auto it:fl) cout<<it<<" ";
    cout<<"\n\n";
}

int main() {

    forward_list<int> x(5,1);
    printFl(x,"x");

    forward_list<int> y(x.begin(),x.end());
    printFl(y,"y");
    y.unique();
    y.push_front(10);
    printFl(y,"y after using unique()");

    auto itx = x.begin();
    advance(itx,3);
    x.insert_after(itx,{2,1,3,4});
    printFl(x,"x");
    cout << "Memory before x first element: " << *x.before_begin() << endl;

    auto i = x.begin();
    for(i=x.begin(); i!=x.end(); ++i) {
        itx=i;
    }

    x.splice_after(itx,y);
    printFl(x,"x after getting element from y");

    return 0;

}
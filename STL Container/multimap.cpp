#include <map>
#include <iostream>

using namespace std;

void printMMap(multimap<int,int> mmap) {
    cout << "KEY" << "\t\t" << "VALUE" << endl;
    if (mmap.empty()) {
        cout << "\t" << "EMPTY MAP" << endl;
        return;
    }
    for(auto itr=mmap.begin(); itr!=mmap.end(); itr++) {
        cout << itr->first << "\t\t" << itr->second << endl;
    }
    cout<<endl;
}

int main() {

    multimap <int,int> multim;

    multim.insert(pair<int,int> (1,10));
    multim.insert(pair<int,int> (1,10));
    multim.insert(pair<int,int> (1,10));
    multim.insert(pair<int,int> (2,20));
    multim.insert(pair<int,int> (1,30));
    multim.insert(pair<int,int> (3,30));
    printMMap(multim);
    cout << "KEY" << "\t\t" << "VALUE" << endl;
    for(auto itr=multim.find(2); itr!=multim.end(); itr++) {
        cout << itr->first << "\t\t" << itr->second << endl;
    }
    cout<<endl<<multim.size()<<endl << endl;
    multim.erase(1);
    printMMap(multim);
    cout<<multim.size()<<endl<<endl;

    multim.clear();
    printMMap(multim);

    return 0;

}
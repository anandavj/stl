#include <unordered_map>
#include <iostream>

using namespace std;

void printMap(unordered_map<int,int> umap) {
    if(umap.size()==0) {
        cout << "EMPTY MAP" << "\n\n";
        return;
    }
    cout << "KEY" << "\t\t" << "Value" << "\n";
    for(auto itr=umap.begin(); itr!=umap.end(); itr++) {
        cout << itr->first << "\t\t" << itr->second << "\n";
    } cout << endl;
}

int main() {

    unordered_map<int,int> mapx;

    mapx.insert(pair<int,int>(5,2));
    mapx.insert(pair<int,int>(2,1));
    mapx.insert(pair<int,int>(10,3));
    mapx.insert(pair<int,int>(11,3));
    printMap(mapx);
    cout << "SIZE: " << mapx.size() << " MAX SIZE: " << mapx.max_size() << endl;
    cout<<mapx.count(11)<<endl; //count key

    return 0;

}
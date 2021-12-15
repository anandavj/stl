#include <vector>
#include<iostream>
#define REP(i,k,n) for(int i=k;i<n;i++)

using namespace std;

void printVector(vector<int> vec) {
    if(vec.empty()) {
        cout << "Vector Empty" << "\n\n";
        return;
    }
    
    for(vector<int>::iterator itr=vec.begin(); itr!=vec.end(); itr++) {
        cout << *itr << " ";
    }
    cout << "\n\n";
}

int main() {
    vector<int> vec;
    int n; cin>>n;
    REP(i,0,n) {
        int x; cin>>x;
        vec.push_back(x*2);
    }
    cout << "Vec: ";
    printVector(vec);

    cout << "Vec (Reversed): ";
    for (auto vecRitr=vec.rbegin(); vecRitr!=vec.rend(); vecRitr++) {
        cout<<*vecRitr<<" ";
    } cout<<endl;

    vector<int> vec2;
    vec2.insert(vec2.begin(),{2,1,3,4,5});
    cout << "Vec2: ";
    printVector(vec2);

    vec==vec2? cout<<"Vec == Vec2" : cout<<"Vec != Vec2";
    cout<<endl<<endl;
    vec<vec2? cout<<"Vec < Vec2" : cout<<"Vec >= Vec2"; // only compare the first element?

    cout << endl << "Capacity Vec:" << vec.capacity();
    vec.shrink_to_fit();
    cout << endl << "Capacity Vec After Shrink:" << vec.capacity();
    cout<< endl << "Capacity Vec2: " << vec2.capacity();
    vec.swap(vec2);
    cout << endl;
    cout << endl << "Capacity Vec:" << vec.capacity();
    cout<< endl << "Capacity Vec2: " << vec2.capacity();

    vec2.resize(16);
    cout<< endl << "Capacity Vec2: " << vec2.capacity();
    cout<<endl;
    vec2.shrink_to_fit();
    cout<< endl << "Capacity Vec2: " << vec2.capacity();
    cout<<endl;
    printVector(vec2);

    return 0;
}
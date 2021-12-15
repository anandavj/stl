#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> vec{1,2,3,4,5,6};
    vector<int> vec2{10,11,0,0,0};

    all_of(vec.begin(),vec.end(), [](int x) {return x%2!=0;})? cout<<"All elements in vec are odd" : cout<<"Not all elements in vec are odd";
    cout<<endl;
    any_of(vec2.begin(),vec2.end(), [](int x) {return x-1==0;})? cout<<"Element 1 is exist" : cout<<"Element 1 is not exist";
    cout<<endl;

    cout<<"vec: ";
    for(auto it:vec) cout<< it << " ";
    cout<<endl;
    cout<<"vec2: ";
    for(auto it:vec2) cout<< it << " ";
    cout<<endl; 

    copy(vec.begin(),vec.begin()+3,next(next(vec2.begin()))); // copy doesn't extend the size

    cout<<"vec: ";
    for(auto it:vec) cout<< it << " ";
    cout<<endl;
    cout<<"vec2: ";
    for(auto it:vec2) cout<< it << " ";
    cout<<endl;

    vector<int> vec3(5);
    cout<<"vec3: ";
    for(auto it:vec3) cout<< it << " ";
    cout<<endl;
    fill(vec3.begin(),prev(vec3.end()),1);
    fill_n(vec3.begin(),vec3.size(),2);
    cout<<"vec3: ";
    for(auto it:vec3) cout<< it << " ";
    cout<<endl;

    cout << "vec: "; for_each(vec.begin(),vec.end(),[](int x) {cout<<x<<" ";}); cout<<endl;

    vector<int> vec4{2,3,4};
    auto searchRes = search(vec.begin(),vec.end(),vec4.begin(),vec4.end());
    cout<<*searchRes<<endl;;

    auto minmaxVal = minmax(vec.begin(),prev(vec.end()));
    cout << "minimum val: " << *minmaxVal.first << " maximum val: " << *minmaxVal.second << endl;
    remove_if(vec.begin(), vec.end(), [](int x) -> bool {return x%2!=0;}); // still not working(?)
    cout<<"vec: ";
    cout << "vec: "; for_each(vec.begin(),vec.end(),[](int x) {cout<<x<<" ";}); cout<<endl;

    return 0;

}
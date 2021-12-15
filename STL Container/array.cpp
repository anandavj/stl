#include <array>
#include <iostream>

using namespace std;
template<typename T, size_t N>

void printArr(array<int,N> arr, string name) {
    cout<<name<<": ";
    if(N==0) {
        cout<< "EMPTY ARRAY\n\n";
        return;
    }
    for(auto i:arr) cout<<i<< " ";
    cout<<"\n\n";
}

int main() {

    array<int,5> arr{1,2,3,4};
    array<int,5> arr2{1,2,3,4,5};

    printArr<int,5>(arr,"arr");
    printArr<int,5>(arr2,"arr2");
    cout<< "SIZE & MAXSIZE arr: " <<arr.size() << " " << arr.max_size() <<"\n\n";
    cout<< "SIZE & MAXSIZE arr2: " <<arr2.size() << " " << arr2.max_size() <<"\n\n";
    cout<< "*arr.begin(): " << *arr.begin() <<"\n\n";

    swap(arr,arr2);

    printArr<int,5>(arr,"arr");
    printArr<int,5>(arr2,"arr2");


    return 0;

}
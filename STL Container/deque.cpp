#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque <int> deq;
    deq.push_back(2);
    deq.push_front(12);
    for(auto it : deq) cout << it << " ";
    cout<<endl;
    cout << deq.size() << "||" << deq.max_size();
    cout<<endl;

    deque <int> deqTwo (500);
    cout<< deqTwo.size() << "||" << deq.max_size() << endl;
    deqTwo.resize(100);
    cout<< deqTwo.size() << "||" << deq.max_size() << endl;
    deqTwo.shrink_to_fit();
    cout<< deqTwo.size() << "||" << deq.max_size() << endl;

    cout << endl << "=============" << "\n\n";

    deque <int> deqThree;
    deqThree.assign(10,5);
    for(auto it : deqThree) cout << it << " ";
    cout<<endl;
    cout << *(deqThree.end()-1);
    cout<<endl;
    cout << deqThree[2];
    cout<<endl;
    cout << *(deqThree.rbegin()+-1) << "||" << *(deqThree.end()) << endl;
    cout << (*(deqThree.rbegin()+-1) == *(deqThree.end()));
    cout<<endl;

    cout << endl << "=============" << "\n\n";


}
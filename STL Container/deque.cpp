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
    cout<<endl<<endl;

    deque <int> deqTwo (500);
    cout<< "DeqTwo size && Max Size:" << deqTwo.size() << "||" << deq.max_size() << endl;
    deqTwo.resize(5);
    cout<< "DeqTwo size && Max Size:" << deqTwo.size() << "||" << deq.max_size() << endl;
    for(auto it : deqTwo) cout << it << " ";
    deqTwo.push_front(1);
    cout<<endl;
    deqTwo.shrink_to_fit();
    cout<< "DeqTwo size && Max Size:" << deqTwo.size() << "||" << deq.max_size() << endl;
    for(auto it : deqTwo) cout << it << " ";
    cout<<endl;

    cout << endl << "=============" << "\n\n";

    deque <int> deqThree;
    deqThree.assign(10,5);
    cout<< "deqThree: ";
    for(auto it : deqThree) cout << it << " ";
    cout<<endl;
    cout << "deqThree last element: " << *(deqThree.end()-1);
    cout<<endl;
    cout << deqThree[2] << " " << deqThree.at(2);
    cout<<endl;
    cout << "Memory of pointer after last element in deqThree: " << *(deqThree.rbegin()+-1) << "||" << *(deqThree.end()) << endl;
    cout << (*(deqThree.rbegin()+-1) == *(deqThree.end()));
    cout<<endl;

    cout << endl << "=============" << "\n\n";

    deque <int> deqFour;
    deqFour.push_back(12);
    deqFour.push_back(121);
    deqFour.push_back(1);
    deqFour.push_front(122);
    deqFour.push_front(22);
    deqFour.push_front(322);

    for(auto it : deqFour) cout << it << " ";
    cout<<endl;
    deqFour.erase(deqFour.begin(), deqFour.end()-2);
    for(auto it : deqFour) cout << it << " ";
    cout<<endl;
    cout<<*deqFour.cbegin();
    cout<<endl;

    cout << endl << "=============" << "\n\n";
    deque <int> deqFive;
    cout <<deqFive.empty()<<endl;
    deqFive.push_back(12);
    deqFive.pop_front();
    cout <<deqFive.empty();

    return 0;

}
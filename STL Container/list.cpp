#include <list>
#include <iostream>

using namespace std;

void printList(list<int> list, string listName) {
    cout<< listName << ": ";
    for (auto it : list) cout << it << " ";
    cout << endl;
}

bool removeIf(const int& val) {return val==1;}

int main() {

    list<int> list1;
    list<int> list2 {2,1,4,5,6};
    list1.assign(5,1);
    printList(list1,"list1");
    auto it = list1.begin();
    list1.insert(it, {2,1,3,4});
    printList(list1,"list1");
    advance(it, 3);
    list1.insert(it, {2,2,2,2});
    printList(list1,"list1");
    list2.assign({2,1,2});
    printList(list2,"list2");

    auto it1 = list1.begin();
    auto it2 = it1;
    advance(it2, 4);
    list1.erase(it1,it2);
    printList(list1,"list1");
    list1.reverse();
    printList(list1,"list1");
    list1.remove_if(removeIf);
    cout<<list1.size()<<"||"<<list2.size()<<endl;
    printList(list1,"list1");
    printList(list2,"list2");
    swap(list1,list2);
    cout<<list1.size()<<"||"<<list2.size()<<endl;
    printList(list1,"list1");
    printList(list2,"list2");
    list1.merge(list2);
    printList(list1,"list1");
    printList(list2,"list2"); //empty
    list1.clear();
    printList(list1,"list1"); //empty

    list1.insert(list1.begin(),{1,2,3,4,5,5});
    // list1[2]; --> can't do it, no random access

    return 0;

}
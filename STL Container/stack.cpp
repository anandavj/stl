#include <stack>
#include <iostream>

using namespace std;

void printStack(stack<int> stc) {
    if(stc.empty()) {
        cout << "Stack Empty" << "\n\n";
        return;
    }
    while(!stc.empty()) {
        cout << stc.top() << endl;
        stc.pop();
    }
    cout << endl;
}

int main() {
    stack<int> stc;
    stc.push(2);
    stc.push(3);

    cout << "Stc:" << endl;
    printStack(stc);
    cout << "Size: " << stc.size() << "\n\n";

    stack<int> stc2;
    stc.swap(stc2);
    cout << "Stc:" << endl;
    printStack(stc);
    cout << "Stc2:" << endl;
    printStack(stc2);

    return 0;
}
#include <queue>
#include <iostream>

using namespace std;

// do not use pointer
void printQueue(queue<int> que) {
    while(que.size()>0) {
        cout<< que.front() << " ";
        que.pop();
    }
    cout<<endl;
}

int main() {

    queue<int> que;

    que.push(2);
    que.push(3);
    cout << "size:" << que.size() << endl;
    printQueue(que);
    cout << "size:" << que.size() << endl;
    cout<<que.front();

    return 0;

}
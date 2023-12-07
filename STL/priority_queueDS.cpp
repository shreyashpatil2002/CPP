#include <bits/stdc++.h>
using namespace std;

int main() {
    // this a type of queue that puts desending order automatically
    priority_queue<int> pq;

    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.emplace(3);

    cout << "The first element is " << pq.top() << endl;

    pq.pop();

    cout << "the second element is " << pq.top() << endl;

    cout << "Size : " << pq.size() << endl;
    cout << "priority_queue is empty : " << pq.empty() << endl;

    priority_queue<int> pq1;
    priority_queue<int> pq2;
    pq1.push(1);
    pq1.push(2);
    pq2.push(3);
    pq2.push(4);
    pq1.swap(pq2);
    cout << "pq1 first element " << pq1.top() << endl;
    cout << "pq2 first element " << pq2.top() << endl;
    pq1.pop();
    pq2.pop();
    cout << "pq1 second element " << pq1.top() << endl;
    cout << "pq2 second element " << pq2.top() << endl;

    // this a type of queue that puts asending order automatically
    priority_queue<int, vector<int>, greater<int>> pqAsc;
    pqAsc.push(7);
    pqAsc.push(4);
    pqAsc.push(2);
    pqAsc.push(1);

    cout << pqAsc.top() << endl;
    pqAsc.pop();
    cout << pqAsc.top() << endl;
    pqAsc.pop();
    cout << pqAsc.top() << endl;
    pqAsc.pop();
    cout << pqAsc.top() << endl;
    return 0;
}
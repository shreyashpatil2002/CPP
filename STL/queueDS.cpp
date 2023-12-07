#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "The first element : " << q.front() << endl;
    cout << "The last element : " << q.back() << endl;

    q.back() += 5; // adding the 5 in last value it became 10
    cout << "after adding " << q.back() << endl;

    q.pop(); // deleting the first element in queue

    cout << "the first element : " << q.front() << endl;

    cout << "Size of queue :" << q.size() << endl;
    cout << "queue is empty : " << q.empty() << endl;

    queue<int> q1;
    queue<int> q2;
    q1.push(1);
    q1.push(2);
    q2.push(6);
    q2.push(7);
    q1.swap(q2); //swapping the q1 with q2
    cout << "q1 first " << q1.front() << endl;
    cout << "q2 first " << q2.front() << endl;
    q1.pop();
    q2.pop();
    cout << "q1 second " << q1.front() << endl;
    cout << "q2 second " << q2.front() << endl;

    return 0;
}
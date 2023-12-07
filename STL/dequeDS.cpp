#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    
    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(1);
    dq.emplace_front(0);

    cout << "the elements in deque are :" << endl;
    for(auto it : dq) 
        cout << it << " ";
    cout << endl;

    cout << "Deleting the last element using pop_back() :" << endl;
    dq.pop_back();
    for(auto it : dq) 
        cout << it << " ";
    cout << endl;

    cout << "Deleting the first element using pop_front() :" << endl;
    dq.pop_front();
    for(auto it : dq) 
        cout << it << " ";
    cout << endl;

    cout << "The last element is : " << dq.back() << endl;
    cout << "The first element is : " << dq.front() << endl;

    deque<int>::iterator it = dq.begin();
    cout << "The first element : " << *(it) << endl;
    it = dq.end();
    it--;
    cout << "The last element : " << *(it) << endl;

    dq.emplace_back(3);
    dq.emplace_back(4);

    for(deque<int>::iterator it = dq.begin(); it != dq.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    cout << "Size : " << dq.size() << endl;

    //deleting the elements in deque
    cout << "Deleting the second element" << endl;
    dq.erase(dq.begin()+1);
    cout << "Deleting the range of elements" << endl;
    dq.erase(dq.begin(), dq.end() - 1);

    for(auto it = dq.begin(); it != dq.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    // insertion in deque
    dq.insert(dq.begin(), 3, 5);
    cout << "after insertion :" << endl;
    for (auto it : dq)
        cout << it << " ";
    cout << endl;
    deque<int> copy(2, 10);
    dq.insert(dq.begin()+2, copy.begin(), copy.end());
    cout << "after adding 10, 2 times" << endl;
    for (auto it : dq)
        cout << it << " ";
    cout << endl;

    deque<int> dq2(5, 10);
    cout << "dq2 is " << endl;
    for (auto it : dq2)
        cout << it << " ";
    cout << endl;
    dq.swap(dq2);
    cout << "dq2 is " << endl;
    for (auto it : dq2)
        cout << it << " ";
    cout << endl;
    cout << "dq is " << endl;
    for (auto it : dq)
        cout << it << " ";
    cout << endl;


    cout << "Deque is empty : " << dq.empty() << endl;

    dq.clear();
    cout << "after clearing the dq size : " << dq.size() << endl;
    return 0;
}
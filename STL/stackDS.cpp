#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "top is " << s.top() << endl;
    
    s.pop(); //deleting the top element in stack

    cout << "top is " << s.top() << endl;

    cout << "Size : " << s.size() << endl;

    cout << "stack is empty :" << s.empty() << endl;

    stack<int> st1, st2;
    st1.push(3);
    st1.push(2);
    st2.push(7);
    st2.push(6);
    st1.swap(st2); // swaping the stack st1 and st2
    cout << "st1 first element : " << st1.top() << endl;    
    cout << "st2 first element : " << st2.top() << endl;    
    st1.pop();
    st2.pop();
    cout << "st1 second element : " << st1.top() << endl;    
    cout << "st2 second element : " << st2.top() << endl;    

    return 0;
}
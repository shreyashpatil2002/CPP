#include <bits/stdc++.h>
using namespace std;

int main() {
    // set only stores unique elements in sorted order
    set<int> st;
    st.insert(3);
    st.insert(2);
    st.insert(4);
    st.insert(5);
    st.insert(3);
    st.insert(7);

    for (auto it : st)
        cout << it << " ";
    cout << endl;

    set<int>::iterator it = st.begin();
    cout << "The first element " << *(it) << endl;
    cout << "The last element " << *(st.end()) << endl;
    
    cout << "size : " << st.size() << endl;
    cout << "is empty : " << st.empty() << endl;

    auto three = st.find(3);
    cout << *(three) << endl;

    auto ten = st.find(10);
    cout << *(ten) << endl;

    cout << "deleting 2 from set " << endl;
    st.erase(2);
    for(set<int>::iterator it = st.begin(); it != st.end(); it++)
        cout << *(it) << " ";
    cout << endl;
    auto four = st.find(4);
    auto seven = st.find(7);
    cout << "deleting four to seven from set " << endl;
    st.erase(four, seven);
    for (auto it = st.begin(); it != st.end(); it++)
        cout << *(it) << " ";
    cout << endl;

    int cnt = st.count(4); // it will return 1 or 0 because it only store unique elements
    cout << "the count of 4 is " << cnt << endl;
    cnt = st.count(2);
    cout << "the count of 2 is " << cnt << endl;

    set<int> s1, s2;
    s1.insert(2);
    s1.insert(5);
    s2.insert(7);
    s2.insert(4);
    s1.swap(s2);
    cout << "s1 is " << endl;
    for (auto it : s1)
        cout << it << " ";
    cout << endl;
    cout << "s2 is " << endl;
    for (auto it : s2)
        cout << it << " ";
    cout << endl;

    for (auto it : st)
        cout << it << " ";
    cout << endl;

    auto UB = st.upper_bound(7);
    auto LB = st.lower_bound(3);
    
    return 0;
}
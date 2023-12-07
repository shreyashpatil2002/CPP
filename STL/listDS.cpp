#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(3);
    ls.emplace_back(4);

    ls.push_front(2);
    ls.emplace_front(1);

    // accessing elements in the list
    list<int>::iterator it = ls.begin();
    cout << "the first element is : " << *(it) << endl;
    it = ls.end();
    cout << "the last element is : " << *(it) << endl;

    cout << "the list element are :" << endl;
    for (auto it : ls)
        cout << it << " ";

    cout << endl;

    // deleting the elements in list
    cout << "After clearing the first element :" << endl;
    ls.erase(ls.begin());
    for (auto it : ls)
        cout << it << " ";

    cout << endl;
    cout << "after deleting the range of elements :" << endl;
    it = ls.begin();
    it++;
    ls.erase(it, ls.end());
    cout << "the list element are :" << endl;
    for (auto it : ls)
        cout << it << " ";

    cout << endl;
    // inserting elements in list
    ls.insert(ls.begin(), 3, 20);
    cout << "after adding element list is :" << endl;
    for (auto it : ls)
        cout << it << " ";

    cout << endl;

    list<int> copy(3, 5);
    ls.insert(it, copy.begin(), copy.end());
    cout << "after copying element list is :" << endl;
    for (auto it : ls)
        cout << it << " ";
    cout << endl;

    // swaping the list
    list<int> ls1(2, 10); // {10, 10}
    list<int> ls2(2, 20); // {20, 20}
    ls1.swap(ls2); // ls1 => {20, 20} ls2 => {10, 10}
    
    cout << "ls1 is : " << endl;
    for(auto it = ls1.begin(); it != ls1.end(); it++)
        cout << *(it) << " ";
    cout << endl;
    cout << "ls2 is : " << endl;
    for(auto it = ls2.begin(); it != ls2.end(); it++) 
        cout << *(it) << " ";
    cout << endl;

    cout << "Size : " << ls.size() << endl;
    cout << "list is empty : " << ls.empty() << endl;
    ls.clear();
    cout << "after clearing size is : " << ls.size() << " and is empty : " << ls.empty() << endl;
    return 0;
}
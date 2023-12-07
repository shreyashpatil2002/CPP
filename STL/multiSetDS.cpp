#include <bits/stdc++.h>
using namespace std;

int main()
{
    // it store element in sorted order only not unique property
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    cout << "The elements are " << endl;
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    cout << "Size : " << ms.size() << endl;
    cout << "is empty : " << ms.empty() << endl;

    int cnt = ms.count(1);
    cout << "The count of 1 is " << cnt << endl;

    ms.erase(ms.find(1)); // only erases single one
    for (auto it : ms)
        cout << it << " ";
    cout << endl;
    ms.erase(ms.find(1), ms.end());
    for (auto it : ms)
        cout << it << " ";
    cout << endl;

    return 0;
}
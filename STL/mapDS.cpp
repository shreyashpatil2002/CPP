#include <bits/stdc++.h>
using namespace std;

int main() {
    // it store unique and sorted keys
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2; // {1, 2}
    mpp.emplace(4, 5);
    mpp.insert({2, 6});

    mpp2[{2, 3}] = 10;

    for(auto it : mpp)
        cout << it.first << " -> " << it.second << endl;

    cout << "size : " << mpp.size() << endl;
    cout << "is empty : " << mpp.empty() << endl;

    cout << mpp[1] << endl;
    cout << mpp[4] << endl;

    auto it = mpp.find(5);

    auto lb = mpp.lower_bound(2);
    auto ub = mpp.upper_bound(3);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    // pair of intigers 
    pair<int, int> p = {23, 54};
    cout << p.first << " " << p.second << endl;

    // pair of intiger and string 
    pair<int, string> student = {101, "shreyash"};
    cout << student.first << " " << student.second << endl;

    // the nested pair 
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    // the array of pair data structure 
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};
    cout << arr[1].first << " " << arr[1].second << endl;

    return 0;
}
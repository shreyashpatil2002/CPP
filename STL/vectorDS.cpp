#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector size is dynamic
    vector<int> v;
    v.push_back(1);
    v.emplace_back(10); // it is faster than push_back().

    vector<pair<int, int>> vec;
    vec.push_back({1, 2}); // we have to use curly braces
    vec.emplace_back(3, 4); // we dont need curly braces

    vector<int> v2(5, 100); 
    // name (size, value)  it is like => {100, 100, 100, 100, 100}

    vector<int> v3(5);
    // the vector of 5 size is declared

    vector<int> num(5, 20);
    vector<int> num2(num); // copying the values in num variable

    // accessing the elements in the vector

    vector<int> nums;
    nums.emplace_back(3);
    nums.emplace_back(6);
    nums.emplace_back(2);
    nums.emplace_back(7);
    nums.emplace_back(9);
    cout << "the value at 0th index : " << nums[0] << " at(0) " << nums.at(0) << endl; // we can use index or using at(index) function

    vector<int>::iterator it = nums.begin(); // nums.begin() gives the memory address of first intiger location 
    // we printing the second element which has index 1
    cout << "the value is : " << *(it) << endl; // it will print 10
    
    vector<int>::iterator ite = nums.end();  
    // It will give the memory location of last element by increment of 1 so we have to minus 1 form them to indicate last element in the vector array.
    ite--;
    cout << "the last element is : " << *(ite) << endl;
    /*
        we also have these 

        vector<int>::iterator it = v.rend(); 
        It will give the memory location of last element incremented by 1 by reversing the vector array so we have to increase the value by 1 to indicate the first element in vector array

        vector<int>::iterator it = v.rbegin();
        It will give the memory location of last element reversing the vector array that indicate the first element in vector array
    */
   cout << "the last element is : " << nums.back() << endl;

    cout << "By first for loop : " << endl;
    for (vector<int>:: iterator it = nums.begin(); it != nums.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    cout << "By second for loop : " << endl;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    cout << "By third for loop : " << endl;
    for(auto it : nums) {
        cout << it << " ";
    }
    cout << endl;

    //Deletion in vector
    cout << "Deleting the second element : " << endl;
    nums.erase(nums.begin() + 1); 

    for(auto it : nums)
        cout << it << " ";
    
    cout << endl;

    cout << "Deleting the range of element (1 to 2) :";
    nums.erase(nums.begin() + 1, nums.begin() + 3);
    for(auto it : nums)
        cout << it << " ";
    
    cout << endl;

    // insertion in vector 
    vector<int> nums2(2, 100); // {100, 100}
    nums2.insert(nums2.begin(), 300); // {300, 100, 100}
    nums2.insert(nums2.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);
    nums2.insert(nums2.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << "Size : " << nums.size() << endl;

    nums.pop_back(); // deletes the last element
    cout << "After poping the element :" <<endl;
    for(auto it : nums)
        cout << it << " ";

    cout << endl;
    // v1 => {1, 2}
    // v2 => {3, 4}
    // v1.swap(v2); => v1 => {3, 4}  v2 => {1, 2}

    nums.clear();
    cout << "after clearing the vector :" << endl;
    for(auto it : nums)
        cout << it << " ";

    cout << nums.empty() << endl; // it return true or false (1 or 0)

    return 0;
}
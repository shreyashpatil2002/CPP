#include <iostream>
// we can include the class form other file
#include "./IronMan.cpp"
using namespace std;

class machine {
    public:
    string name = "MacBook Air M1";
    int price = 93000;
    string company = "Apple Inc.";
    class details {
        public:
        int ram = 8;
        int storage = 256;
        string processor = "M1";
        string storageType = "SSD";
    };
};
int main() {
    Hero IronMan;
    // if the class is empty the size of class is 1.
    // cout << "size of class is : " << sizeof(IronMan) << endl;
    // cout << IronMan.name << endl;

    machine m1;
    cout << "product name is : " << m1.name << endl;
    cout << "price is : " << m1.price << endl;
    cout << "company is : " << m1.company << endl;
    machine::details d1;
    cout << "ram is : " << d1.ram << " GB"<< endl;
    cout << "storage is : " << d1.storage << " GB" << endl;
    cout << "processor is : " << d1.processor << endl;
    cout << "storage type is : " << d1.storageType << endl;
    return 0;
}
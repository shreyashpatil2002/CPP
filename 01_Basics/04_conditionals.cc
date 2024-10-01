/*
    take age as a input from the user and print if they can drive the car or not
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age > 18)
    {
        cout << "You can drive a car" << endl;
    }
    else{
        cout << "You can't drive a car" << endl;
    }

    /* 
        write a program to print the day using switch case
    */

   int date;
   cin >> date;
   switch (date)
   {
   case 1:
    cout << "Today is Sunday" << endl;
    break;
   case 2:
    cout << "Today is Monday" << endl;
    break;
   case 3:
    cout << "Today is thusday" << endl;
    break;
   case 4:
    cout << "Today is Wendday" << endl;
    break;
   case 5:
    cout << "Today is Thursday" << endl;
    break;
   case 6:
    cout << "Today is Friday" << endl;
    break;
   case 7:
    cout << "Today is Saturday" << endl;
    break;
   
   default: cout << "Nothing is here" << endl;
    break;
   }
    
    return 0;
}
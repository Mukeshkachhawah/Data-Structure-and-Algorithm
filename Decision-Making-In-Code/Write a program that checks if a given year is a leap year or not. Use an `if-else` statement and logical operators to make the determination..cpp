#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year :";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Does not leap year";
    }
}
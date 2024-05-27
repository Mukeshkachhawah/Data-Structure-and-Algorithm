#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Give a chber : ";
    cin >> ch;
    if (ch % 5 == 0)
    {
        cout << "Given chber is divisible by 5 but also\n";
    }
    if (ch % 5 == 0 && ch % 7 == 0)
    {
        cout << "Given chber is divisible by both 5 and 7 ";
    }
    else if (ch % 7 == 0)
    {
        cout << "Given chber is divisible by 7";
    }
    else
    {
        cout << "chber is not divisible by 5 and 7";
    }
}
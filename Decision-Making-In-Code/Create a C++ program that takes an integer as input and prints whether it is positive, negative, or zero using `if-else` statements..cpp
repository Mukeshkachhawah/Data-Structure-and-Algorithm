#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter chber : ";
    cin >> ch;
    if (ch >= 1 && ch != 0)
    {
        cout << "Positive chber";
    }
    else if (ch <= 1)
    {
        cout << "Negative chber";
    }
    else
    {
        cout << "Zero";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Types of your angles :";
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;
    if (a + b + c <= 180 && a < 90 && b < 90 && c < 90)
    {
        cout << "Acute triangle ." << endl;
    }
    else if ((a == 90 || b == 90 || c == 90) && (a + b + c == 180 && a <= 90 && b <= 90 && c <= 90))
    {
        cout << "Right angle triangle";
    }
    else if ((a > 90 || b > 90 || c > 90) && (a + b + c == 180))
    {

        cout << "Obtuse triangle";
    }

    else
    {
        cout << "Galat angle dala  hai brooooohhhhhhhhhhhhh";
    }
}

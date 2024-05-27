#include <iostream>
using namespace std;
int main()
{
    char color;
    cout << "Enter the traffic light color(R/G/Y): ";
    cin >> color;
    if (color == 'r' || color == 'R')
    {
        cout << "Stopp!!\n";
        cout << "Single is red ";
        cout << "You can go whenever single light is green";
    }
    else if (color == 'g' || color == 'G')
    {
        cout << "Green Light On ... Go!\n";
        cout << "Next single is red .........";
    }
    else if (color == 'y' || color == 'Y')
    {
        cout << "Yellow Light On  .. Caution!\n";
        cout << "Next single is red ";
    }
    else
    {
        cout << "Invalid color entered. Please enter either R , G , Y.\n ";
    }
}

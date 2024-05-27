#include <iostream>1
using namespace std;
int main()
{
    float percentage;
    cout << "Enter the Percentage  ::\n ";
    cin >> percentage;

    cout << "Percentage is : " << percentage << "%" << endl;
    if (percentage >= 25 && percentage <= 38)
    {
        cout << "Fail";
    }
    else if (percentage >= 39 && percentage <= 50)
    {
        cout << "Grade E ";
    }
    else if (percentage >= 51 && percentage <= 60)
    {
        cout << "Grade D ";
    }
    else if (percentage >= 61 && percentage <= 70)
    {
        cout << "Grade C ";
    }
    else if (percentage >= 71 && percentage <= 85)
    {
        cout << "Grade B ";
    }
    else if (percentage >= 86 && percentage <= 100)
    {
        cout << "Grade A ";
        cout << "Congrutulation";
    }
}
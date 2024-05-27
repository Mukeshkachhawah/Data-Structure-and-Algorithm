
#include <iostream>
using namespace std;
int main()
{
    float cel, fer, ch;
    cout << "If you want to convert Temperature  press 1 : Into celcius and press 2 : Into ferenhite \n";
    cin >> ch;
    if (ch == 1)
    {
        cout << "Given the value of celcius : ";
        cin >> cel;
        cout << "Given celcius is : " << cel;
        fer = (cel * 9 / 5) + 32;
        cout << "\nTemperature in Fahrenheit : " << fer;
    }
    else if (ch == 2)
    {
        cout << "Give the value of Fahrenheit : ";
        cin >> fer;
        cout << "Now we can convert fahrenheit to celcius :";
        cel = ((fer - 32) * 5 / 9);
        cout << "Temperature  in Celsius: " << cel;
    }
}

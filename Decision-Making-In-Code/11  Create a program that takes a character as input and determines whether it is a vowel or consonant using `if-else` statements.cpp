#include <iostream>
using namespace std;
int main()
{
    char value;
    cout << "Type your character - ";
    cin >> value;
    if (value == 'a' || value == 'e' || value == 'i' || value == 'o' || value == 'u')
    {
        cout << "Given Alphabet is vowel !!";
    }
    else
    {
        cout << "Given Alphabet is Consonant !!\n";
    }
    cout << "Complete !!";
}
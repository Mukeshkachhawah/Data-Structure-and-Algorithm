#include <iostream>
using namespace std;
int main()
{
    int username, password;
    cout << "Username : ";
    cin >> username;
    cout << "\nPassword : ";
    cin >> password;
    if (username == 1234 && password == 12345)
    {
        cout << "Access Granted! Welcome User.";
    }
    else
    {
        cout << "\n\t Access Denied !!! \n Wrong Username or Password.\n Please try again with correct credentials.";
    }
}
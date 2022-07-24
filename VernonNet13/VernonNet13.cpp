#include <iostream>

using namespace std;

double calling()
{
    int number;
    cout << "Enter a number:";
    cin >> number;
    if (number < 15)
    {
        cout << "Good Choice!" << endl;
    }
    else if (number >15 and number <100)
    {
        cout << "Nice try";
    }
    else
    {
        cout << "It\'s over!";
    }
    return 0;
}

int main()
{
    calling();
    return 0;
}

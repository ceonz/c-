#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an int: ";
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
        cout << "I love C++" << endl;
    return 0;
}
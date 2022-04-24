#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int count;
    cout << "*" << endl;
    for (int i = 1; i <= n; i++)
    {
        count = 0;
        cout << "*";
        for (int j = 1; j <= i; j++)
        {

            cout << ++count;
        }
        for (int j = 1; j <= i - 1; j++)
        {
            count--;
            cout << count;
        }
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        count = 0;
        cout << "*";
        for (int j = 1; j <= i; j++)
        {
            cout << ++count;
        }
        for (int j = 1; j <= i - 1; j++)
        {

            count--;
            cout << count;
        }

        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "*" << endl;

    return 0;
}

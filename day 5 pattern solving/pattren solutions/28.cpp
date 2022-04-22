#include <iostream>
using namespace std;
void stars(int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
}
void space(int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << " ";
    }
}
void printing(int i, int n)
{
    stars(n - i + 1);
    space(i - 1);
    space(i - 1);
    stars(n - i + 1);
    cout << endl;
}

int main()
{
    int n = 5;
    // for upper half
    for (int i = 1; i <= n; i++)
    {
        printing(i, n);
    }

    // for lower half
    for (int i = n - 1; i >= 1; i--) //  I = N FOR REPEAT LINE 5
    {
        printing(i, n);
    }

    return 0;
}
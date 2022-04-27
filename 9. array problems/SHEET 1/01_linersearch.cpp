#include <iostream>
using namespace std;
int linersearch(int arr[], int size, int e)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == e)
        {
            index = i;
            break;
        }
    }
        return index;
}
int main()
{
    int arr[] = {2, 4830, 4594359, 54295, 547, 54975894, 52345, 454, 4, 5, 5, 5, 2, 423, 41, 345, 6, 3, 54, 12, 4, 3, 523, 22342, 531, 325, 325, 2343, 453, 52, 23523, 42, 34};
    cout << linersearch(arr, 33, 547);
    return 0;
}
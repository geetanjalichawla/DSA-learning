#include <iostream>
using namespace std;
void reverseArray(int a[],int f, int l)
{
    while (f < l)
    {
        swap(a[f], a[l]);
        f++;
        l--;
    }
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {3, 5, 9, 7, 2};
    reverseArray(arr, 0, 4);
    printarr(arr, 5);

    return 0;
}
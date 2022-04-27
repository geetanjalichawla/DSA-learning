#include<iostream>
using namespace std;
void swapalternative(int arr[], int last )
{
    for (int i = 0; i+1 < last; i =i+2)
    {
     swap(arr[i], arr[i+1]);
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
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,3};
swapalternative(arr,14);
printarr(arr,14);
return 0;
}
#include<iostream>
using namespace std;
int maxarray(int arr[], int size)
{
    int ans = arr[0];
    for (int i = 1; i < size; i++)
    {
        ans = max(ans,arr[i]);
    }
    return ans;
}
int minarray(int arr[], int size)
{
    int ans = arr[0];
    for (int i = 1; i < size; i++)
    {
        ans = min(ans,arr[i]);
    }
    return ans;
}
int main()
{
    int arr[] ={3,53,534,62,2,4,1,4,6,6,2,1,4,3,2534,64562356};
        cout<<maxarray(arr,16)<<endl;
        cout<<minarray(arr,16);

return 0;
}
#include<iostream>
#include<limits.h>
using namespace std;
void printarr(int arr[], int s , int n);
int maxsubarray(int arr[], int n){
    int sum = 0;
    int ans = INT_MIN;
    int start = 0;
    int end = 0;
    int store = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(sum>ans)
        {
            start = store;
            end = i;
        }
        ans = max(ans,sum);
        if (sum < 0)
        {    sum = 0;
            store = i+1;
        }
        
    }
    printarr(arr,start,end);
    cout<<"\nsize of max sub array is  ";

  return ans;
    

}
void printarr(int arr[], int s , int n)
{
    for (int i = s; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
int arr[] = {-2,-3,4,-1,-2,1,5,-3};
cout<<maxsubarray(arr,8);
return 0;
}
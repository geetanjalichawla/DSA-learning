#include<iostream>
#include<limits.h>
using namespace std;
int maxsubarray(int arr[], int n){
    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        ans = max(ans,sum);
        if (sum < 0)
        {    sum = 0;
        }
        
    }
    return ans;
    

}
int main()
{
int arr[] = {-2,-3,4,-1,-2,1,5,-3};
cout<<"size of max sub array is"<<maxsubarray(arr,8);
return 0;
}
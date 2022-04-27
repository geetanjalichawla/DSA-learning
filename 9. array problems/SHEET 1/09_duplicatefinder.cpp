#include<iostream>
using namespace std;
int func (int arr[], int n){
       n = n-1;
        int SON =( n*(n+1))/2;
        int SUM = 0;
        for(int i = 0 ; i <= n ; i++ )
        {
            SUM += arr[i];
        }
        
        
        int ans = SUM - SON;
       
        
        return ans;
}
int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9,10,11,14,13,12,6};
cout<<func(arr,15);
return 0;
}
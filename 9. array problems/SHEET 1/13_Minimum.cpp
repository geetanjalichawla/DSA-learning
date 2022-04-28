#include<iostream>
using namespace std;
int  minswap(int k , int arr[], int n)
{
    int i = 0;
    int j = 0;
    int count = 0;
    while (i<n && j< n)
    {
        if (arr[j] < k || i==j){
           if (i != j)
           {
               swap(arr[i], arr[j]);
               count++;
           }
           
            i++;
            j++;
        }
        if (arr[i] <= k){
            i++;
        }
        if(arr[j] > k){
            j++;
        }
   }
    return count;
    

}
void pntVector(int ans[], int n)
{
    for (int i = 0; i <n; i++)
    {    cout<<ans[i]<<" "; }
    
}
int main()
{
int a[]=   {9, 7, 2, 5, 4, 7, 8};
 pntVector(a,7);
 cout<<"\n"<<minswap(8,a,7);
 cout<<endl;
 pntVector(a,7);
return 0;
}
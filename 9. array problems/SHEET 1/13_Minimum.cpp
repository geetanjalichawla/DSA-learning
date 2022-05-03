#include<iostream>
using namespace std;
int  minswap(int k , int arr[], int n)
{
    int count = 0;   
    for (int i = 0; i < n; i++)
    {
        if(arr[i] <= k){
            count++;
        }
    }
    int start = 0, end = count-1,bad = 0,move = n;
    while (end<n)
    {
       
    for (int i = start; i <= end; i++)
    {
        //  cout<<start<<" i = "<<i<<" "<<end<<" "<<bad<<endl;
    }
    move = min(bad,move);
    // cout<<move<<" "<<bad<<"at the "<<start<<end<<endl;
    bad = 0 ;
    start++;
    end++;
    
    }
   return move;

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
 cout<<"\n answer for min swap shoubld be "<<minswap(7,a,7);
 cout<<endl;
return 0;
}
#include<iostream>
using namespace std;
void search2dcol( int arr[][3], int row , int n ,int m , int k){
int i = 0 ; 
int j = 2; 
int mid;
while (i <= j)
{
    mid = (i+j)/2;
if (arr[row][mid] == k)
{
   cout<<"element is found on"<<row<<" "<<mid;
   return;
}
else if (arr[row][mid] < k)
{
    i = mid+1;
}
else{
    j = mid-1;
}
}
}

void search2drow (int arr[][3], int n , int m , int k)
{
int i = 0 ; 
int j = 2; 
int mid;
while (i <= j)
{
    mid = (i+j)/2;
if (arr[mid][0] <= k && arr[mid][m-1]>= k)
{
   search2dcol(arr, mid ,n, m , k);
   return;
}
else if (arr[mid][0] < k)
{
    i = mid +1;
}
else{
    j = mid -1;
}
}
cout<<"element not found";
}
int main()
{
    int arr [3][3] = {{1,2,3}, {4,5,6} ,{7,8,9}};
search2drow(arr,3,3,4);

return 0;
}
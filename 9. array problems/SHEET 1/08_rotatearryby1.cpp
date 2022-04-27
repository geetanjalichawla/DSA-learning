#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
   int temp = arr[n-1];
   for(int i = n-1 ; i>= 0; i--)
   {
       arr[i] = arr[i-1];
   }
   arr[0] = temp;
}
int main()
{
int arr[] ={4,343,4,2,1,4,4,3,1,34,4,42,1,343,4,2,1,4,4,3,1,34,4,42,1};
rotate(arr,25);
return 0;
}
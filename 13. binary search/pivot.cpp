#include<iostream>
using namespace std;
int pivotelement(int arr[], int n)
{
    int low = 0 ;
    int high = n -1;
    int mid;
    while (low < high)
    {
   mid = (high + low )/ 2 ;
   if(arr[mid] >= arr[0])
   {
       low = mid+1;
   }
   else
   {
       high = mid;
   }

    }
    return low ;
    
}
int main()
{               //            -1
    int arr[] = {6,7,9,11,23,-1,0,1,2,3, 4, 5};
            //   0,1,2, 3, 4, 5,6,7,8,9,10,11
cout<<pivotelement(arr,12);

return 0;
}
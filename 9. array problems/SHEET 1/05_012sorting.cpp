#include<iostream>
using namespace std;
void sort012(int arr[],int size)
{
    int count[3] ={0,0,0};
      for (int i = 0; i < size; i++)
      {
          if (arr[i] == 0)
          {
             count[0]++;
          }
          else if (arr[i] == 1)
          {
             count[1]++;
          }
          else
          {
             count[2]++;
          }
          
     }

     for (int i = 0; i < size; i++)
     {
        if (count[0]>0)
        {
            arr[i] = 0;
            count[0]--;
        }
        else if(count[1]>0)
        {
            arr[i] = 1;
            count[1] --;
        }
        else
        {
            arr[i] = 2;
            count[2]--;
        }
        
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
int arr[] ={0,1,2,0,2,1,1,0,2,2,2,1,1,2,1};
sort012(arr,15);
printarr(arr,15);

return 0;
}
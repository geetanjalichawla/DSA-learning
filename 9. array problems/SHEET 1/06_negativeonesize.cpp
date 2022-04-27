#include<iostream>
#include<limits.h>
using namespace std;
void negative(int arr[],int n)
{
int i = 0, j = 0;
while(i < n){
if(arr[i] < 0)
{
   if(i!=j)
    swap(arr[i], arr[j]);
   
    j++;
}
i++;
}
}

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
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
// int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
 int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
//                                11,5 ,6,11
cout<<"my code"<<endl;
negative(arr,9);
printarr(arr,9);
cout<<"\ncheck code"<<endl;
int arr2[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
rearrange(arr2,9);
printarr(arr2,9);

return 0;
}
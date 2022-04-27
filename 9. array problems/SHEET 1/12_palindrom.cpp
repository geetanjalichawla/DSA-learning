#include<iostream>
using namespace std;
bool checkp(int arr[],int i, int j)
{
    while (i<j)
    {
        if(arr[i] != arr[j]) {return false;}
        i++;
        j--;
    }
    return true;
    
}
int main()
{
int arr[] ={1,3,4,5,4,3,1};
cout<<checkp(arr,0,6)<<" "<<true;//first and last index 
return 0;
}
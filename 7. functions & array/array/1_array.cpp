#include<iostream>
using namespace std;
//printing array function
void print_array(int a[], int size){
for (int i = 0; i < size; i++)
{
    cout<<a[i]<<endl;
}

}

int main()
{
    // creation
int  arr[10] ;
    int arr2[5] = {1,23,6,78,9};
//printing call
print_array(arr2,5);

return 0;
}

#include<iostream>
using namespace std;
int main()
{ 
    int n = 5;
 

    for (int i = 1; i <= n; i++)
    {
        char count = 'A'-1;
        for (int j = 1; j <= i; j++)
        {
            cout<<++count;
        }
        for (int j = 1; j <= i-1; j++)
        {
            
            count--;
            cout<<count;
        }
        cout<<endl;

    }
    
    
    return 0;
}


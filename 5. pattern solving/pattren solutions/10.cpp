/*dimond shape
    *
   * *
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    *
*/
#include<iostream>
using namespace std;
int main()
{ int n =4;
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            if(j<= n-i)
            cout<<" ";
            else
            cout<<"* ";
        }
        cout<<endl;
        
    }
    for (int i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            if(i-j >=1 )
            cout<<" ";
            else
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
    return 0;
}


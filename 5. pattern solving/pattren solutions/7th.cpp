/*
half pyramid
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * * 
*/


 #include<iostream>
 using namespace std;
 int main()
 {
     int n = 6;
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n-i; j++)
         {
             cout<<" ";
         }
         for (int j  = 1; j<= i; j++)
         {
             cout<<"* ";
         }
         cout<<endl;
         
         
     }
     
     return 0;
 }
 
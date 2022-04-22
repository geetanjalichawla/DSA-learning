/*
-->>        LEETCODE QNO. 476      <<---
Question is numbers complement 
 means if num = 5 then answer should be 2 
101(5)-->010(2) 

EXPLINATION::-->>

    if num = 00......32bits......101
      ~num = 11......32bits......010
   we need = 00...0..32bits.0....010 // 0 in starting

   how to get 010 only from ~num
answer is mask creating a mask which have equal amout of 1's as num's digit means 101 -->> 111
so, we can & them with ~num because 1&1 = 1 but 1&0 = 0

~num = 111..........11010
mask = 000..........00111 (& both of them)
ans  = 000..........00010

thats what we want  RETRUN ans;
*/


class Solution {
public:

    int findComplement(int num) {
   int mask = 0;
        while (mask < num)
        {
            // left shift 
            mask = (mask<<1) | 1;
            // or 0 with 1 -->> 0|1 - 1  (this is to get 0 in the end )
            
        }
    int ans = ~num & mask;
        return ans;
        
    }
};
#include<iostream>
using namespace std;
int main()
{
    Solution obj;
    int n ;
    cin>>n;
    cout<<obj.findComplement(n);


return 0;
}
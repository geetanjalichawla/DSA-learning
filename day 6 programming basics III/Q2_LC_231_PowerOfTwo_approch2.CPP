/*
---->> LEETCODE QNO. 231 POWER OF TWO <<-------
2 ki powers means 1,2,4,8,16,32,64,128,256,.......
--->> apporch 2nd 
 -->> AND  & aproch
 here every 2power number looks like this 1,10,100,1000,10000,100000.....
 and every 2'spower number -1 looks like  0,01,011,0111,01111,011111....

 so if(n &n-1)  we should get 0 in case of 2 ki powers 
 
 and for non 2 ki powers we will get something like 3 - 111 & 2 ---> 010 
 and of 3&2 will be 2 which is non zero value # we will always get a non zero value in a non 2 ki power vala case
*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
          if(n>0)  if(!(n & n-1))
        return true;
        return false;
            
    }
};

int main()
{
    Solution obj;
    if(obj.isPowerOfTwo(4)) cout<<true;
    else cout<<false;

    return 0;
}
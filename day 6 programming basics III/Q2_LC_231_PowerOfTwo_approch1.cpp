/*
---->> LEETCODE QNO. 231 POWER OF TWO <<------- 
--->> apporch one
 -->> bit aprroch
 *** we can count the number of 1's in the num
 1010101 -> count = 4
 so if count == 1 then number is power of 2
*/

#include <iostream>
using namespace std;


class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
      
        if(n<=0) return false;
        { int count = 0;
        while (n != 0)
        {
            if (n & 1)
                count++;
            n = n >> 1;
        }
        if (count == 1)
            return true;
        return false;
        }
    }
};
int main()
{
    Solution obj;
    cout << obj.isPowerOfTwo(8);
    return 0;
}
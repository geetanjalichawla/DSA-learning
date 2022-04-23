/*
---->> LEETCODE QNO. 7 REVERSE INTEGER <<------
--->> IF num = 13423
answer should be 32431
123 -> 321
9393 -> 3939
*/
#include<limits.h>
#include<iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {

        int rev = 0;
        int temp;

        while (x != 0)
        {
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            else
            {
                temp = x % 10;
                x /= 10;
                rev = rev * 10 + temp;
            }
        }
        return rev;
    }
};
int main()
{
Solution obj;
cout<<obj.reverse(-223234);//change it to check for different values
return 0;
}

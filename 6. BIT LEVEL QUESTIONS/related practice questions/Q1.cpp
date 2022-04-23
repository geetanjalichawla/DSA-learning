/*
Given an integer n, find whether it is a power of 4 or not.

Example : 

Input : 16
Output : 16 is a power of 4

Input : 20
Output : 20 is not a power of 4
*/
//
/*
  0,1,2 ,4 ,  5,   6,   7....
  1,4,16,64,256,1024,4096......
 bits
 1 ---> 000000000001
 4 ---> 000000000100
 16 --> 000000010000
 64---> 000001000000
 256 -> 000100000000

i think i can see a combination here we only have c1 = 1 (count of 1)
&
we only have c0%2 == 0 (count of 0 are always even)
*/
 #include<iostream>
 using namespace std;
 int main()
 {

int num = 20;
int c0 = 0;//count 0
int c1 = 0;//count 1
while(num!= 0 )
{
if(num&1 == 1)
{
    num = num>>1;
    if(num == 0)
    break;
    else
    c1 = 1; // 1 are more than 1 the 4 ki power is not posible 
    break;
}
else 
c0++;
num = num >> 1;
}
if(c0%2 == 0 && c1 == 0 )
cout<<"true";
else
cout<<"false";

 return 0;
 }
/*
Question is numbers complement 
 means if num = 5 then answer should be 2 
101(5)-->010(2) 

    if num = 00......32bits......101
      ~num = 11......32bits......010
   we need = 00...0..32bits.0....010 // 0 in starting

   how to get 010 only from ~num
answer is mask creating a mask which have equal amout of 1's as num's digit means 101 -->> 111
so, we can & them with ~num because 1&1 = 1 but 1&0 = 0

~num = 111..........11010
mask = 000..........00111 (& both of them)
ans  = 000..........00010

thats what we want 



*/
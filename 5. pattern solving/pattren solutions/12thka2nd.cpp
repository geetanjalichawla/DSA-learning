// hollow pyramid
// 1. space in every case will be row - 1 times 
// 2 .and if the row number is 1 or n mwe have to treat diffrently 
// 3. in 2 to n-1 part we have do someting

#include<iostream>
using namespace std;
int main(){
  
    int n = 6;
for(int row = 1; row<=n; row++){
    //for every row
    
    //print space
    for(int col = 1; col<=n-row; col++){
        cout <<" ";
    }
    // print star
    if(row == 1 || row == n){
        for(int col = 1; col<=row; col++){
            cout << "* ";
        }
    }
   else{
       cout <<"* ";
    for(int col = 2; col <= row-1; col++){
        cout << "  ";
    }
    cout << "* ";
   } 
   // after printing star
   cout << endl;
}
}
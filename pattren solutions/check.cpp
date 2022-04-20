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
/*
3
44
555
6666
555
44
3
*/
#include<iostream>
using namespace std;
int main(){
    int start, n ; 
    //input two number
    cout<<"input two numbers: ";
    cin >> start >> n;
    for(int row = 1; row <= n ; row ++){
        //for each row 
        for(int col = 1 ; col <= row ; col ++){
            cout << start  ;
        }
        // after each row 
        cout << endl;
        start ++;
    }
    start = start - 2;
    for(int row = 1; row <= n - 1 ; row ++){
        //for each row 
        for(int col = 1 ; col <= n - row  ; col ++){
            cout << start  ;
        }
        // after each row 
        cout << endl;
        start--;
    }
}

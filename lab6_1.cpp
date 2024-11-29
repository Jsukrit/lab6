#include<iostream>
using namespace std;

int main(){
    int x,odd =0,even=0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x != 0){
      
    if(x%2==0){
        even = even+1;
    }
    else{
        odd = odd+1;
    }
    cout << "Enter an integer: ";
    cin >> x;  
    //cout << even << " " << odd << endl;
}
    cout << "#Even numbers = " << even << "\n" ;
    cout << "#Odd numbers = " << odd ;
    return 0;
}

#include<iostream>
 using namespace std;
 int main(){
     int x;
     cin>>x;
     if(x<0 || x>100){cout<<"Wrong Input";}
     else if(x>=90){cout<<"A";}
     else if(x>=80){cout<<"B";}
     else if(x>=70){cout<<"C";}
     else if(x>=60){cout<<"D";}
     else if(x>=50){cout<<"E";}
     else{cout<<"F";}
 }

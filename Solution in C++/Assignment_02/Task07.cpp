#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%2==0 && x%5==0){cout<<"Multiple of 2 and 5 both";}
    else if(x%2==0 || x%5==0){cout<<x;}
    else{cout<<"Not a multiple we want";}
}

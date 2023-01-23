#include<iostream>
using namespace std;

int main(){
    int x,c=0,i=0;
    cin>>x;
    while(i<x){
        if(x%i==0){
            c+=i;
        }
        i++;
    }
    if(c==x){cout<<x<<" is a perfect number.";}
    else{cout<<x<<" is not a perfect number.";}
}

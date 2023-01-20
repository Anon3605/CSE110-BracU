#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x>=0 && x<=168){
        if(x<=40){cout<<200*x;}
        else{cout<<(200*x)+8000;}
    }
    else if(x<0){cout<<"Hours cannot be negative";}
    else{cout<<"Impossible to work more than 168 hours weekly";}
}

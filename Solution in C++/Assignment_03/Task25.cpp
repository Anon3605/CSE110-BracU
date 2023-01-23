#include<iostream>
using namespace std;

int main(){
    int x,a=0,b=1,sum{0};
    cin>>x;
    cout<<a<<" ";
    while(sum<=x){
        sum=a+b;
        a=b;
        b=sum;
        cout<<a<<" ";
    }
}

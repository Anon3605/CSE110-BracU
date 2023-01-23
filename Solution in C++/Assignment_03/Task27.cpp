#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y,i{0},decimal{0};
    cin>>x;
    while(x){
        y=x%10;
        x=x/10;
        decimal+=y*pow(2,i);
        i++;
    }
    cout<<decimal;
}

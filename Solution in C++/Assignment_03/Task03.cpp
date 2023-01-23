#include<iostream>
using namespace std;

int main(){
    //inefficient

    int a{0};
    for(int i{63}; i<=600; ++i ){
        if(i%7==0 && i%9==0){
            a+=i;
        }
    }
    cout<<a<<endl;

    //Efficient

    a=0;
    for(int i{63}; i<=600; i+=(7*9) ){
            a+=i;
        }
    cout<<a;
}

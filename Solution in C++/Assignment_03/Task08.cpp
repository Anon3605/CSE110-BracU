#include<iostream>
using namespace std;

int main(){
    int a, sum{0};
    cin>>a;
    for(int i=0; i<=50; i+=7){
        sum+=i;
    }
    cout<<sum;
}

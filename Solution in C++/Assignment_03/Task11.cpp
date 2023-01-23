#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,cnt=0;
    cin>>a;
    while(a){
        a=a/10;
        cnt++;
    }
    cout<<cnt;
}

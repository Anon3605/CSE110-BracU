#include<iostream>
using namespace std;

int main(){
    int x,y,z,b,it;
    cin>>x>>y>>z;
    int arr[y-x+1];
    it=0;
    while(x<=y){
        int prod=1;
        int a,c;
        c=x; //to not update x [x is global var]
        while(c){
            a=c%10;
            c=c/10;
            prod=prod*a;
        }
        arr[it]=prod;
        ++it;
        ++x;
    }

    for(auto j:arr){
        if(j%z==0){
            cout<<j<<" ";
        }
    }
}

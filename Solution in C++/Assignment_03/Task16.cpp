#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x,y,mini,maxx;
    float avg{0};
    cin>>x;
    for(int i{0}; i<x; i++){
        cin>>y;
        if(i==0){mini=y; maxx=y;}
        else{
            if(y<mini){mini=y;}
            if(y>maxx){maxx=y;}
        }
        avg+=y;
    }
    cout<<"Maximum "<<maxx<<endl;
    cout<<"Minimum "<<mini<<endl;
    cout<<"Average "<<avg/x;
}

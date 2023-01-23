#include<iostream>

using namespace std;

int main(){
    for(int i=24; i>=-6; i-=6){
        if(i==-6){
            cout<<i<<endl;
        }
        else{
            cout<<i<<", ";
        }
    }
    for(int i=-10; i<=20; i+=5){
        if(i==20){
            cout<<i<<endl;
        }
        else{
            cout<<i<<", ";
        }
    }
    for(int i=18; i<=63; i+=9){
        if(i==63){
            cout<<i<<endl;
        }
        else{
            cout<<i<<", ";
        }
    }
    for(int i=18; i<=63; i+=9){
        if(i==63){
            if(i%2==0){
                cout<<i<<endl;
            }
            else{
                cout<<-i<<endl;
            }
        }
        else if(i%2==0){
            cout<<i<<", ";
        }
        else{
            cout<<-i<<", ";
        }
    }
}


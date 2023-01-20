#include<iostream>

using namespace std;

int main(){
    float a,b;
    cin>>a>>b;
    if (a>b){
        cout<<"First is greater"<<endl;
    }
    else if(a<b){
        cout<<"Second is greater"<<endl;
    }
    else{
        cout<<"The numbers are equal"<<endl;
    }
}

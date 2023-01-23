#include<iostream>
using namespace std;

int main(){
    int x,c=0,i=1;
    cin>>x;
    while(i<=x){
        if(x%i==0){
            cout<<i<<endl;
            c++;
        }
        i++;
    }
    cout<<"Total "<<c<<" divisor/s.";
}

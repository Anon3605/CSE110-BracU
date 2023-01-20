#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int hours,minuites,seconds;
    cin>>seconds;
    hours=floor(seconds/3600);
    minuites=floor((seconds%3600)/60);
    seconds=(seconds-(minuites*60)-(hours*3600));
    cout<<"Hours : "<<hours<<" Minuites : "<<minuites<<" Seconds : "
    <<seconds<<endl;
}

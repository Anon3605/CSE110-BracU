#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int s;
    cin>>s;
    if(s<100){cout<<setprecision(13)<<3000-125*pow(s,2);}
    else{cout<<setprecision(13)<<12000/(4+(pow(s,2))/14900);}
}

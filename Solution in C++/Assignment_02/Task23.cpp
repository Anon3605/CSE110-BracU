#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float f,c;
    cin>>f;
    c=(f-32)*0.56;
    cout<<setprecision(2)<<c<<" degrees C"<<endl;
    if (c<20){cout<<"Winter";}
    else if (c<=25){cout<<"Autumn";}
    else if(c<30){cout<<"Spring";}
    else{cout<<"Summer";}
}

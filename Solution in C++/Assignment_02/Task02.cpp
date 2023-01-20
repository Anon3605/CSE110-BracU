#include<iostream>
//#include<bits/stdc++.h> //This includes all library
#include<cmath>
#include<iomanip>
#define pi (M_PI)


using namespace std;

int main(){
    double radius,area,cir;
    cin>>radius;
    area=(pi*pow(radius,2));
    cir=(pi*2*radius);
    cout<<"Area is "<<setprecision(16)<<area<<endl;
    cout<<"Circumference is "<<setprecision(16)<<cir<<endl;
}

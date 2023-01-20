#include<iostream>

using namespace std;

int main(){
    float x,c;
    cin>>x>>c;
    if (x>4 || x<0){cout<<"Invalid CGPA";}
    else if (c<0 || c>136){cout<<"Invalid Credit count";}
    else if (c>=30){
        if (3.8<=x && x<3.9){cout<<"The student is eligible for a waiver of 25 percent.";}
        else if (3.89<x && x<=3.94){cout<<"The student is eligible for a waiver of 50 percent.";}
        else if (3.94<x && x<4){cout<<"The student is eligible for a waiver of 75 percent.";}
        else if (x==4){cout<<"The student is eligible for a waiver of 100 percent.";}
        else{cout<<"The student is not eligible for a waiver";}
    }
    else{cout<<"The student is not eligible for a waiver";}


}

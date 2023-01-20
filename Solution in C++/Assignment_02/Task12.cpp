#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    if(x<0 || x>24){cout<<"Wrong Time";}
    else if(4<=x<=6){cout<<"Breakfast";}
    else if(12<=x<=13){cout<<"Lunch";}
    else if(16<=x<=17){cout<<"Snacks";}
    else if(19<=x<=20){cout<<"Dinner";}
    else{cout<<"Patience is a virtue";}
}

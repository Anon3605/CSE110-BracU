#include<iostream>
using namespace std;

int main(){
    int s,t;
    float v;
    cin>>s>>t;
    v=(s/1000)/(t/3600);
    cout<<v<<endl;
    if(v<60){cout<<"Too slow. Needs more changes.";}
    else if(v<=90){cout<<"Velocity is okay. The car is ready!";}
    else{cout<<"Too fast. Only few charges should saffice";}
}

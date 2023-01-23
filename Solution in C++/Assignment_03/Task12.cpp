#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main(){
    int a,b,x,z;
    cin>>a;
    b=to_string(a).size()-1; //to_string is in <cstring> STL
    while(a){
        z=ceil(pow(10,b)); //IDK, it really narrow the output by 1,
                           //that's why celi is used
        x=floor(a/z);
        cout<<x<<", ";
        a=a%(x*z);
        --b;

    }

}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,d,result;
    cin>>a>>b>>c>>d;
    result=pow(a,c);
    cout<<result+b*a-(d/3);
}

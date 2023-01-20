#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,d,result;
    int result2;
    cin>>a>>b>>c>>d;
    result=pow(a,c);
    result2=result+b*a-(d/3);
    cout<<result2;
}

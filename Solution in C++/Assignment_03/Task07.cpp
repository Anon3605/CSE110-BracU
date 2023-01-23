#include<iostream>
using namespace std;


int main(){
    int x[10], y;
    float sum{0},coun{0}, z;
    for(int i=0; i<10; ++i ){
        cin>>y;
        x[i]=y;
    }

    for(auto cha:x){
        if(cha%2!=0){
            sum+=cha;
            coun+=1;
        }
    }

    z=sum/coun; //int this operation, every variables' data type must be float
    cout<<z;
}

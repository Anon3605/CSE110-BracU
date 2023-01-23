#include<iostream>
using namespace std;

#define ll long long
using namespace std;

int main(){
    ll a, i{0}, x{0};
    cin>>a;

    for(int j{0}; j<=a; ++j){
        if(j%2==0){
            x=x-pow(j,2);
        }
        else{
            x=x+pow(j,2);
        }
    }
    cout<<x<<endl;

    x=0;


    while(i<=a){
        if(i%2==0){
            x=x-pow(i,2);
        }
        else{
            x=x+pow(i,2);
        }
        ++i;
    }
    cout<<x;
}

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

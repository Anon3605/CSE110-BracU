#include<iostream>

using namespace std;

int main(){
    int a[5], x, sum{0}, i{0};
    while(i<5){
        cin>>x;
        sum+=x;
        a[i]=sum;
        i++;
    }

    cout<<endl;
    for(auto cha:a){
        cout<<cha<<endl;
    }

}

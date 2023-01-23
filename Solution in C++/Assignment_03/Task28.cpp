#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    int a,b,x,cou{0},cou2{0};
    vector<int>vec;vector<int>vec2;
    cin>>a>>b;
    x=a;
    while(x<=b){
        int cou3{0},sum{0};
        for(int i=1;i<x;i++){
            if(x==1){break;}
            if(x%i==0){cou3++;sum+=i;}
        }
        if (cou3==1){cou++; vec.push_back(x);}
        if (sum==x){cou2++; vec2.push_back(x);}
        x++;
    }
    cout<<"Between "<<a<<" and "<<b<<" ,"<<endl;
    cout<<"Found "<<cou<<" prime number"<<endl;
    cout<<"Found "<<cou2<<" perfect number"<<endl;
    cout<<"Prime number/s: ";
    vector<int>::iterator it;
    for (auto it=vec.begin();it<vec.end();it++){
        cout<<*it<<", ";
    }
    cout<<endl;
    cout<<"Perfect number/s: ";
    for (auto it=vec2.begin();it<vec2.end();it++){
        cout<<*it<<", ";
    }

}

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x,y;
    cin>>x;
    vector<int> vec;
    while(x){
        y=x%2;
        x=x/2;
        vec.push_back(y);
    }
    while(vec.begin()-vec.end()!=0){
        cout<<vec.back();
        vec.pop_back();
    }
}

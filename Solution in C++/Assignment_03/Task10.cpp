#include<iostream>
#include<cstring>

//To find the length of a string we use:
// 01. str_name.size() method
// 02. str_name.length() method
// 03. strlen(str_name) function [NB:This one is in <cstring> STL]

using namespace std;
int main(){
    string x;
    cin>>x;
    for(int i{x.size()-1}; i>=0; --i ){
        if(i==0){cout<<x[i]; return 0;}
        cout<<x[i]<<", ";
    }
}

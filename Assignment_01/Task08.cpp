#include<iostream>
using namespace std;


int main(){
    int chocolate, recieve,reminder;
    cin>>chocolate;
    recieve=chocolate/3;
    reminder=chocolate-recieve*3;
    cout<<"Each friend will receive "<<recieve<<" chocolates"<<endl;
    cout<<"The number if remaining chocolate is "<<reminder;
}

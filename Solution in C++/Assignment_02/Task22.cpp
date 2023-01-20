#include<iostream>

using namespace std;

int main(){
    int a,b,total;
    cin>>a>>b;
    total = a*120 + b*75;
    if(total<0){cout<<"Total can't be negative";}
    else if(total<300){cout<<"Previous total: "<<total<<endl<<
        "No discount"<<endl;
    }
    else if(total<500){cout<<"Previous total: "<<total<<endl<<
        "New total after discount: "<<total-10<<endl;
    }
    else if(total<750){cout<<"Previous total: "<<total<<endl<<
        "New total after discount: "<<total-20<<endl;
    }
    else if(total<1000){cout<<"Previous total: "<<total<<endl<<
        "New total after discount: "<<total-50<<endl;
    }
    else{cout<<"Previous total: "<<total<<endl<<
        "New total after discount: "<<total-150<<endl;}
}

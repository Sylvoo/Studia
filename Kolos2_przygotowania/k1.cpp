#include<iostream>

using namespace std;

int main(){
    double x = 11.7;

    cout<<sizeof(x)<<endl;
    
    bool k = x>=11.5 && x<=20;
    cout<<k<<endl;
    //cout<<boolalpha<<k<<endl;

    return 0;
}


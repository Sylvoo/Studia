#include<iostream>

using namespace std;

int main(){

    for (int i=10;i<=20;i++){
        int y = 30-i;
        if (i == 20){
            cout<<"Last iteration"<<endl;
        }
        if (i-30 == y){
            cout<<"x is bigger then y"<<endl;
        }
        else{
            cout<<i<<endl;
        }
        cout<<" "<<endl;

    }
    
    return 0;
}


#include<iostream>
using namespace std;

int *w;
int zmienna = 3;
int main(){

    w = &zmienna;
    cout<<w<<endl;
    cout<<*w<<endl;

    *w = 5;
    cout<<"--------------"<<endl;
    cout<<w<<endl;
    cout<<*w<<endl;

    return 0;
}
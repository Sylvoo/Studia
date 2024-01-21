#include<iostream>
using namespace std;
//co wskazuje wskaznik przypisany do zmiennej ktorej nie ma
int *w;
int main(){

    for (int i=0; i<10;i++){
        int k = 12;
        w = &k;
    }

    cout<<w;
    //cout<<k;

    return 0;
}
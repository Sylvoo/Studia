#include<iostream>

using namespace std;

int zmiana(int* x)
{
    *x -= 1;
   return *x;
}

int fun(int&y){
    y -= 1;
    return y;
}

int b = 5;
int*x =&b;


int main(){

    //zmiana(x);
    fun(b);
    cout<<b;

    
    return 0;
}
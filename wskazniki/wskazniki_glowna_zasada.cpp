#include<iostream>

using namespace std;

int main()
{   
    int liczba = 144;
    int *w;
    w = &liczba;
    cout<< liczba <<endl; //144
    cout<< *w <<endl; // 144
    cout<< w <<endl; // 0xe8641ffbf4
    cout<< "-------------------" <<endl;
    


    return 0;
}
#include<iostream>

using namespace std;

int main(){
    char napis[] = "wi niid some answirs";
    char blad ='i';
    char poprawka = 'e';
    char*p = napis;
    int length = sizeof(napis)/sizeof(char);
    for (int i=0;i<length;i++)
    {
        if(*p == blad){
            *p = poprawka;
        }
        *p++;
        cout<<napis[i];
    }
    
    
    return 0;
}


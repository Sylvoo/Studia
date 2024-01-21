#include<iostream>
using namespace std;

#define COUNT(X)  sizeof(X)/sizeof(*X)

int main()
{
    int tab[5] = {1,2,3,4,5};

    for(int i = 0 ; i < COUNT(tab) ; i++){
    printf("tab=%d\n", *(tab + i));
   }


    return 0;
}
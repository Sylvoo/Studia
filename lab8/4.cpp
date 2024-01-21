#include<iostream>
#include <iomanip>

using namespace std;

int tab[10][10];
int tab1[10]={1,2,3,4,5,6,7,8,9};
int tab2[10]={1,2,3,4,5,6,7,8,9};
int k = 1;
int p = 1;
int main(){
    for(int i=0; i<10;i++){
        for (int j=0;j<10;j++){
            tab[i][j] = tab1[i]*tab2[j];
        }
        
    }
    for(int i=0; i<10;i++){
        for (int j=0;j<10;j++){
            if(tab[i][j]<10){
                cout<<"["<<tab[i][j]<<" ]";
            }
            else {cout<<"["<<tab[i][j]<<"]";}
        }
        cout<<endl;
        
    }
    return 0;
}
#include<iostream>

using namespace std;

int tab[10];
int tabb[] = {1, 5, 3, 10};
int main(){

    for (int i=0; i<10; i++){
        int k = i+1;
        tab[i] = (k*k);
        cout<< "\n"<< tab[i];
    }
    cout<<"\n --------------"<<endl;
    
    for(int i=0;i<4;i++){
        int k = tabb[i];
        k = k*k;
        cout<< k <<endl;
    }
    
    return 0;
}
#include<iostream>
#include <iomanip>

using namespace std;

int tab[] = {1, 5, 7, 77, 8, 4, 10, -99, 8};
int main(){

    int suma = 0;
    int min = 0;
    int max = 0;
    int now = 0;
    int ile = 0;
    float srednia = 0.0;
    //float p = 3.4322312312313123132;
    for(int i = 0; i<sizeof(tab)/4;i++){
        suma += tab[i];
        ile += 1;
        now = tab[i];
        if(now < min){
            min = now;
        }
        if (now > max){
            max = now;
        }
    }
    cout<<setprecision(4);
    srednia = suma/ile;
    cout<<suma<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<srednia<<endl;
    ///cout<<p;

    return 0;
}
#include<iostream>
#include<cmath>

using namespace std;

struct Czas{
    int godzina;
    int minuta;
};

int na_minuty(int x, int y){
        int wynik = 60*x + y; 
        return wynik;
    }

int main(){

    Czas p1;
    cout<<"Podaj pierwsza godzine: ";
    cin>>p1.godzina;
    cout<<" : ";
    cin>>p1.minuta;
    if(p1.godzina<0 || p1.godzina>=24 || p1.minuta<0 || p1.minuta>59){
        int k = 1;
        while(k){
            if(p1.godzina<0 || p1.godzina>=24 || p1.minuta<0 || p1.minuta>59){
            cout<<"Podales nieprawidlowa godzine! Popraw sie : ";
            cin>>p1.godzina;
            cout<<" : ";
            cin>>p1.minuta;
            }
            else{
                k = 0;
            }
        }
    }

    Czas p2;
    cout<<"Podaj druga godzine: ";
    cin>>p2.godzina;
    cout<<" : ";
    cin>>p2.minuta;
    if(p2.godzina<0 || p2.godzina>=24 || p2.minuta<0 || p2.minuta>59){
        int k = 1;
        while(k){
            if(p2.godzina<0 || p2.godzina>=24 || p2.minuta<0 || p2.minuta>59){
            cout<<"Podales nieprawidlowa godzine! Popraw sie : ";
            cin>>p2.godzina;
            cout<<" : ";
            cin>>p2.minuta;
            }
            else{
                k = 0;
            }
        }
    }

    Czas wynik;
    wynik.godzina = abs(p1.godzina-p2.godzina); 
    wynik.minuta = abs(p1.minuta-p2.minuta);
    
    cout<<"Roznica miedzy godzinami wynosi: "<<wynik.godzina<<":"<<wynik.minuta<<"h"<<endl;
    cout<<"A w minutach wynosi: "<< na_minuty(wynik.godzina, wynik.minuta)<<" min"<<endl;
    return 0;
}


#include<iostream>

using namespace std;

struct Complex
{
    double re;
    double im;
};

int main(){

    double re1,re2,im1,im2 = 0;
    cout<<"Podaj wartosci realis dla liczby zespolonej: ";
    cin >> re1;
    cout<<"Podaj wartosci imaginalis dla liczby zespolonej: ";
    cin >> im1;
    cout<<"Podaj wartosci realis dla liczby zespolonej: ";
    cin >> re2;
    cout<<"Podaj wartosci imaginalis dla liczby zespolonej: ";
    cin >> im2;

    Complex liczba_urojona1;
    liczba_urojona1.re = re1;
    liczba_urojona1.im = im1;

    Complex liczba_urojona2;
    liczba_urojona2.re = re2;
    liczba_urojona2.im = im2;

    double wynik_re = liczba_urojona1.re + liczba_urojona2.re;
    double wynik_im = liczba_urojona1.im + liczba_urojona2.im;

    if(wynik_im>0){
        cout<< wynik_re <<"+"<<wynik_im<<"i"<<endl;
    }
    else{
        cout<< wynik_re <<"-"<<wynik_im<<"i"<<endl;
    }

    return 0;
}



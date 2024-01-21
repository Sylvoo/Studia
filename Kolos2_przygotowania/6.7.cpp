#include<iostream>

using namespace std;

struct Point{
    double x;
    double y;
};
struct Section{
      Point A;
      Point B;  
    };

int main(){
    Section one;
    Section two;
    Section three;
    Section four;
    Point p1;
    Point p2;
    Point p3;
    Point p4;

    cout<<"Podaj wspolrzedne lewego gornego punkta"<<endl;
    cin>>p1.x;
    cin>>p1.y;

    cout<<p1.x<<","<<p1.y<<endl;

    cout<<"Podaj wspolrzedne prawego dolnego punkta"<<endl;
    cin>>p3.x;
    cin>>p3.y;

    cout<<p1.x<<","<<p1.y<<endl;
    cout<<p3.x<<","<<p3.y<<endl;

    one.A = p1;
    one.B = p2;
    two.A = p2;
    two.B = p3;
    three.A = p3;
    three.B = p4;
    four.A = p4;
    four.B = p1;

    




    







    return 0;


}


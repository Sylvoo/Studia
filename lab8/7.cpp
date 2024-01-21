//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  char tab[2] = {3, 7};

  cout << (void *) &tab[0] << endl; //adres zmiennej w systemie hex
  cout << (void *) &tab[1] << endl;
  for (int i=0; i<(sizeof(tab)/sizeof(tab[0]))+1;i++){
    cout<<tab[i]<<endl;
  }

  return 0;
}

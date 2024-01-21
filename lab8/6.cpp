//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurrence counting
//============================================================================

#include <iostream>
using namespace std;

//int liczby[];
int ile=0;
int maxx =0;
int now=0;

int main() {
  int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7,77};
  
  for (int i=0; i<(sizeof(digits)/sizeof(digits[0])); i++){
    
    now = digits[i];
    if (now > maxx){
        maxx = now;
    }
  }

  for (int j=0; j<maxx+1;j++){
    ile=0;
        for(int i=0; i<(sizeof(digits)/sizeof(digits[0])); i++){
            if (digits[i]==j){
                ile += 1;
            }
        }
        if(ile!=0){
            cout<<j<<": "<<ile<<endl;
        }

    }
  
  
  return 0;
  
  }
    
    
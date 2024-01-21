#include<iostream>

using namespace std;

int main(){
    int i = 0;
    do{
        i++;
        if(i>14){
            break;
        }  
        if(i!=2 && i != 5 && i != 9 && i!= 14){
            continue;
        }
         
        cout<<i<<endl;

    }while(1);

    return 0;
}


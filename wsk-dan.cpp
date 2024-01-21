#include <iostream>

#define COUNT(X)  sizeof(X)/sizeof(*X)

using namespace std;



// file.h
void write(char* txt, char* filename);

// file.c
static void check(){

}

void write(char* txt, char* filename){

    check();
    
}


void print(char a[10]){ // sprobuj uzyc tego 
    for( int i = 0; i < 2; i ++){
        cout<< a[i]<<endl;
    }

}

void print_sizeof(char* ptr){
    cout << sizeof(ptr) << endl;
}

static void counter(){
    static int counter = 3;
    
    if(counter){
        printf("ok\n");
        counter--;
    }
}

int main()
{
    int *w = NULL;// lub nullptr
    int k = 0;
    w = &k;
    int p = 5;
    *w = p;
    cout << k << endl;
    char l = 'a';
    const char cl = l;
    char *q = "text";
    char text[5] = "text";
    char text1[10] = "text";
    cout << *q << endl;
    int tab[3] = {1, 2, 3};
    cout << *tab << endl;

    cout << "----------------------------" << endl;
    cout << sizeof(w) << endl;  // 8
    cout << sizeof(k) << endl;  // 4
    cout << sizeof(&k) << endl; // 8
    cout << sizeof(*w) << endl; //
    cout << sizeof(l) << endl;  // 1
    cout << sizeof(&l) << endl; // 8
    cout << sizeof(q) << endl;  // 8
    cout << sizeof(text) << endl;  // 5
    cout << sizeof(text1) << endl;  // 10
    print_sizeof(text1); // 8
    cout << sizeof(tab) << endl;  // 12
    cout << sizeof(tab)/sizeof(*tab) << endl;  // count: 3

    cout << *(q + 2) << endl;
    cout << q << endl;
    cout << "---------------------------" << endl;
 
    char* y = q + 2;
    // *y = 'y';
    //*(q + 2) = y;
    cout << "ssdfsfsd" << endl;
    cout << text << endl;
    *(text + 2) = 'y';
    cout << text << endl;

    cout << "---------------------------" << endl;

    int hex = 0x01020304;
    int * hex_ptr = &hex;
    char* h = (char*)&hex;

    cout << (void *)h << " "<< *h<< endl;
    printf("%d\r\n", *h);
    cout << hex_ptr << " "<< *hex_ptr<< endl;

    printf("%x\r\n", *hex_ptr);
    *(h + 2) = 0x05;

    cout << (void *)h << " "<< *h<< endl;
    cout << hex_ptr << " "<< *hex_ptr<< endl;
    printf("%x\n", *hex_ptr);


    int s = -1;
    unsigned int us1 = -2;
    cout << s << " " << us1 <<endl;
    printf("%x\n", us1);

    /*
    int *o = &tab[0];
    cout<< o <<endl;
    cout<< o+2 <<endl;
    cout<< "-----------------"<<endl;
    cout<<*q<<endl;
    */


   for(int i = 0 ; i < COUNT(tab) ; i++){
    printf("tab=%d\n", *(tab + i));
   }



    //const char* const i = "ala";
    //char * j = "ola"; 
    //(i + 2) = 'b';
    //i = j;

    int tmp;
    static int tmp_static;
    printf("tmp=%d\n", tmp);
    printf("tmp_static=%d\n", tmp_static);
    

    int * alloc = new int;
    delete(alloc);
    int * tab5int = new int[5];
    cout << sizeof(tab5int) << endl;
    delete[] tab5int;
    

    counter();
    counter();
    counter();
    counter();
    counter();
    counter();


    return 0;
}
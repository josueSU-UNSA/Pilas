#include <iostream>
#include <conio.h>
#include "Pila.h"
using namespace std;
int main(){
    Pila<int>test;
    for (int i=0;i<11;i++)
        test.push(i);
    test.print();
    cout<<"Borraando el ultiomo eleemento"<<endl;
    test.pop();
    test.print();
    getch();
    return 0;
}
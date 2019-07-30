#include <iostream>
#include "pilha.hpp"

using namespace std;

int main(){
    Pilha <int, 5> A;

    try{
        cout<<"Pilha 01:"<<endl;
        A.push(10);
        A.push(20);
        A.push(56);
        A.push(90);
        A.push(85);
        A.show();

        cout<<endl;

        cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();
         cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();
         cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();
         cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();
         cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();
         cout<<"Desempilhar: "<<A.pop()<<endl;
        A.show();

    }catch(underflow_error){
        cout<<"Is not possible remove data from an empty stack."<<endl;
    }catch(overflow_error){
        cout << "There's no room in stack." << endl;
    }

    return 0;
}
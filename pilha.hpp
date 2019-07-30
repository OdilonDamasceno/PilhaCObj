#ifndef __pilha_hpp_
#define __pilha_hpp_

#include <exception>
#include <iostream>

template <typename T, int N>
class Pilha{
private:
    int cPush;
    T vet[N];
public:
    Pilha(){
        cPush = 0;
    }
    inline
    void push(T dado){
        if(full()){
            throw std::overflow_error("Stack is Full");    
        }
        vet[cPush] = dado;
        cPush++;
    }
    inline
    T pop(){
        T data = vet[--cPush];
        if(empty()){
            throw std::overflow_error("Stack is empty");    
        }
        vet[++cPush] = 0;
        cPush--;
        return data;
    }
    inline 
    bool full(){
        return cPush == N;
    }
    inline
    bool empty(){
        return cPush == 0;
    }
    inline
    void show(){
        std::cout<<"{";
        for(int i = 0; i < cPush; i++){
            std::cout<< vet[i]<<", ";
        }
        std::cout<<"\b\b}"<<std::endl;
    }
};

#endif
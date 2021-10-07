#include <iostream>
#include"Node.h"
using namespace std;
template<typename T>
//Estructure LIFO
class Pila{
    public:
        Node<T>*m_pCima;
    public:
        Pila(){
            m_pCima=0;
        }
        void push(T value){
            if(!m_pCima){
                this->m_pCima=new Node<T>(value);
                return;
            }
            Node<T>*pAux=new Node<T>(value);
            pAux->m_pSig=this->m_pCima;
            m_pCima=pAux;
        }
        void pop(){
            if(!this->m_pCima)return;
            Node<T>*pAux=this->m_pCima->m_pSig;
            delete this->m_pCima;
            this->m_pCima=pAux;
        }
        void print(Node<T>*pAux){
            if(!pAux)return;

            else{
                cout<<pAux->value<<endl<<"|"<<endl;
                print(pAux->m_pSig);
                
            }
        }
        void print(){
            print(this->m_pCima);
        }
};
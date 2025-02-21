#include <iostream>
#include <string> //para manipular string
#include <climits>

namespace UPF{

struct node{
    std::string value;
    node*previous; //ponteiro para anterior
    node*next; //ponteiro para proximo

};
struct list{
    node *first = nullptr;
    node *last = nullptr;
    int num_nodes=0;

    int size(){
        return num_nodes;
    }

    void push_front(const std::string &s){
        num_nodes++;
        node *p = new node;
        p->value = s;
        p->previous = nullptr;
        p->next = first;
        if(first != nullptr){ 
            first->previous = p;
         }
        first = p;
        if(last == nullptr){
            last = p; 
        }
    }
    void push_back(const std::string &s){
        num_nodes++;
        node *p = new node;
        p->value= s;
        p-> next = nullptr;
        p->previus= last;
        if (last != nullptr) last->next = p;
            last = p;
        if (first == nullptr) first = p;
        }

    int count(const std:: string &s){
        int n = 0;
        
    }
};

};
#include <iostream>
 
namespace UPF{
    struct node{
        std::string value;//valor string
        node *previous;
        node *next;

    };

    struct list{
        node *first = nullptr;
        node *last = nullptr;
        num_nodes = 0;

    };

    int size(){return num_nodes;}


}
#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head)
{
    Node<int>* tmp = head;
    Node<int>* next=nullptr;
    //  make copy of each node,
    // and link them together side-by-side in a 
    // single list.
    while (tmp != nullptr) {
        next = tmp->next;
        Node<int>* copy = new Node<int>();
        copy->value = tmp->value;
        tmp->next = copy;
        copy->next = next;
        tmp = next;
    }
    tmp = head;
    while (tmp != nullptr) {
        if (tmp->random != nullptr) {
            tmp->next->random = tmp->random->next;
        }
        tmp = tmp->next->next;
    }
    // restore the original list, and extract the 
    // copy list.
    tmp = head;
    Node<int>* tmp2 = new Node<int>();
    tmp2->value = 0;
    Node<int>* copy;
    Node<int>*copyTail = tmp2;
    while (tmp != nullptr) {
        next = tmp->next->next;
        // extract the copy
        copy = tmp->next;
        copyTail->next = copy;
        copyTail = copy;
        // restore the original list
        tmp->next = next;
        tmp = next;
    }
    return tmp2->next;
    
}

#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
};

void insert(Node **head, Node **tail, Node *node){
  if(*head == NULL){
    *head = node;
    *tail = node;
  }else{
    (*tail) -> next = node;
    *tail = node;
  }
  cout << "element inserted" << endl;
}

int main(){

  Node *head = NULL; 
  Node *tail = NULL;
 
  for(int i = 1; i <= 10; i++){
    Node *node = new Node();
    node -> data = i;
    node -> next = NULL;
    insert(&head, &tail, node);
  }


  return 0;
}
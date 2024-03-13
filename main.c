#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}Node;
Node *head=NULL;
void create(int n){
    Node *nw,*temp;
    while(n--){
        nw=malloc(sizeof(Node));
        printf("Enter data: ");
        scanf("%d",&nw->data);
        if(head==NULL){
            head=temp=nw;
        }
        else{
            temp->link=nw;
            temp=nw;
        }
    }
}
void rev(){
    Node *prev=NULL,*current,*next;
    current=next=head;
    while(next!=NULL){
        next=next->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
void display(){
    Node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    create(n);
    rev();
    display();
    return 0;
}

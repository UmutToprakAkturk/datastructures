#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};//func do that add new nodes, if its even end or  its add beginnig of the list
void insertnode(struct node* head,int value){

    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data= value;
    newnode->next= NULL;

    if(*head==NULL){
        *head=newnode;
    }
    else if(newnode->data%2 !=0){
        struct node *current=newnode;
        current->data=value;
        current->next=*head;
        *head=current;
    }
    else{
        struct node* current=*head;
        while(current-next!=NULL){
            current=current->next;
        }
        current->next=newnode;
    }
}

int main(){
    int value;
    struct node* head=NULL;

    printf("Enter data to add the list(to exit -1)");

    while(1){//infinite loop
    scanf("%d",&"value");
    if(value==-1) break; //if the number is -1, we should add it newnode's data

    insertnode(*head,value);

    
}
    struct node* current = *head;
    //i want to see all nodes on screen

    printf("List start with: ");
    while(current !=NULL){
        printf("%d -"current->data);
        current=current->next;
    }

    printf("end of the list");

}
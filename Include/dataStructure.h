#ifndef DATASTRUCTURE_H_INCLUDED
#define DATASTRUCTURE_H_INCLUDED


#include <stdio.h>  //malloc printf


#define true 1
#define false 0



/**-------------------------------------------------------------------------------------------*/
/** List*/
typedef struct Node{
    int data;
    struct Node *next;
}LinkNode;

typedef struct{
    int length;
    LinkNode *head;
    LinkNode *rear;
}LinkHead;

LinkHead* init_LinkList(int *value,int length){

    LinkHead *head = (LinkHead*)malloc(sizeof(LinkHead));
    head->head = NULL;
    head->rear = NULL;
    head->length = 0;
    for(int i = 0 ; i < length ; i++)
        listAddRear(head,value[i]);

    return head;
}

void listAddRear(LinkHead *head,int e){
    LinkNode* tmp = (LinkNode*)malloc(sizeof(LinkNode));
    tmp->next = NULL;
    tmp->data = e;

    if(isEmpty(head)){
        head->head = tmp;
        head->rear = tmp;
    }else{
        head->rear->next = tmp;
        head->rear = tmp;
    }
    head->length++;
}

void listAddfront(LinkHead *head,int e){
    LinkNode* tmp = (LinkNode*)malloc(sizeof(LinkNode));
    tmp->next = NULL;
    tmp->data = e;

    if(isEmpty(head)){
        head->head = tmp;
        head->rear = tmp;
    }else{
        tmp->next = head->head;
        head->head = tmp;
    }
    head->length++;

}
int isEmpty(LinkHead *head){
    if(0 == head->length)
        return true;
    else
        return false;
}

void printList(LinkHead *head){

    LinkNode *tmp = head->head;
    printf("\nÁ´±íÖµÎª:");
    while(NULL!=tmp){
        printf(" %d",tmp->data);
        tmp = tmp->next;
    }
}

void freeList(LinkHead *head){
    LinkNode *tmp = head->head;
    do{
        tmp = tmp->next;
        free(head->head);
        head->head = tmp;
    }while(NULL!=tmp);
    head->head = NULL;
    head->rear = NULL;
    head->length = 0;
}

/** queue*/




/** stack*/
#endif // DATASTRUCTURE_H_INCLUDED

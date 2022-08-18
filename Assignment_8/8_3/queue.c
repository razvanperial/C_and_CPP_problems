/*
CH-230-A
a8 p3.[c]
Razvan Perial
rperial@jacobs-university.de
*/


/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    //don't do anything is queue if full
    if(queue_is_full(pq))
        return -1;

    //declare new node
    struct node* newel;

    //assign memory
    newel = ( struct node *) malloc ( sizeof ( struct node ));
    //check the memory allocation
    if(newel == NULL){
        printf("pula");
        return -1;
    }

    //copy item to newel
    newel->item = item;

    //set next pointer to NULL
    newel->next = NULL;

    //if queue was empty, set front node
    if(queue_is_empty(pq)){
        pq->front  =  newel;
    }
    else{//otherwise set current rear node’s next pointer to new node
        pq->rear->next = newel;
    }

    //set rear pointer to new node
    pq->rear = newel;

    //increase no. of items by 1
    pq->items++;

    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    //If queue is empty do not do anything
	if(queue_is_empty(pq))
        return -1;

    *pitem = pq->front->item;

    //copy item to temporary variable
    Node *temp = pq->front;
    
    //reset front pointer to the next item in queue
    pq->front = pq->front->next;

    //free memory
    free(temp);

    //if there are no more elements, reset front and rear pointers to NULL 
    if(queue_item_count(pq) == 1)
        pq->front = pq->rear = NULL;
    
    //decrease item count
    pq->items--;

    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

//print the queue
void printq(Queue *pq){
    //declare auxiliar node for printing the queue
    //and initialize it at the front of the queue
    Node *nod = pq->front;
    printf("content of the queue: ");

    //interating through the queue using the auxiliar value
    for(; nod != NULL; nod = nod->next){
        printf("%d ", nod -> item);
    }
    printf("\n");
}

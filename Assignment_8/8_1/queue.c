/*
CH-230-A
a8 p1.[c]
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
	// add missing stuff
        return 0;
}
void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
/*
 * LinkedList.h
 *
 *  Created on: Sep 29, 2021
 *      Author: theresesmith
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Room.h"
typedef struct
{
	int roomNumber;
	float treasure;
}SearchResults;
typedef Room Payload;
typedef SearchResults Payload2;
struct LLNode;
typedef struct LLNode
{
	struct LLNode* next;
	struct LLNode* prev;
	Payload* payP;
}LLNode;
typedef struct LLNode2
{
	struct LLNode2* next;
	struct LLNode2* prev;
	Payload2* payP;
}LLNode2;

typedef struct backFromDQFIFO
{
	Payload* mp;
	LLNode* newQHead;
}backFromDQFIFO;

class LinkedList {
public:
	LinkedList();
	virtual ~LinkedList();
private:

LLNode* makeEmptyLinkedList();
LLNode2* makeEmptyLinkedList2();
LLNode* removeFromList( Payload* pP);
void savePayload( Payload* mp);
void savePayload2( Payload2* mp);
bool isEmpty();
Payload* dequeueLIFO();
backFromDQFIFO* dequeueFIFO();
void printHistory();
};

#endif /* LINKEDLIST_H_ */

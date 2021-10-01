/*
 * Pawn.h
 *
 *  Created on: Sep 25, 2021
 *      Author: theresesmith
 */

#ifndef PAWN_H_
#define PAWN_H_

#include "Checker.h"
#include "LinkedList.h"

class Pawn: public Checker {
public:
	Pawn();
	virtual ~Pawn();
	LLNode* getYourMoves();
};

#endif /* PAWN_H_ */

/*
 * Checker.h
 *
 *  Created on: Sep 25, 2021
 *      Author: theresesmith
 */

#ifndef CHECKER_H_
#define CHECKER_H_
#include <stdio.h>
#include "LinkedList.h"

class Checker {
public:
	Checker();
	virtual ~Checker();
	virtual LLNode* getYourMoves();
};

#endif /* CHECKER_H_ */

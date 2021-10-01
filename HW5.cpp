//============================================================================
// Name        : HW5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "King.h"
#include "Pawn.h"
#include "Checker.h"

int main() {
	cout << "!!!Hello  xxx World!!!" << endl; // prints !!!Hello World!!!
	Checker* cP = new Checker();
	Pawn* pP = new Pawn();
	pP->getYourMoves();
	King* kP = new King();
    kP->getYourMoves();
    Checker* okp = new King();
    okp->getYourMoves();
	return 0;
}

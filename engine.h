#ifndef ENGINE_H_
#define ENGINE_H_

#include <iostream>
#include <string.h>

using namespace std;

class Board {

public:
	Board();
	const string names[13] = {"empty", "wkorol", "wkoroleva", "wslon", "wkon", "wladia", "wpeshka",
						"bkorol", "bkoroleva", "bslon", "bkon", "bladia", "bpeshka"}; //parasha
	void initBoard(int board[8][8]);
	void move(int board[8][8], int src[2], int dst[2]);
	bool checkMove(int board[8][8], int src[2], int dst[2], bool firstmove = false, int piece=-1);
	void clearBoard(int board[8][8]);
};

class Debug {

public:
	Debug();
	void showBoard(int board[8][8]);
	void namesMap();
};


#endif /* ENGINE_H_ */
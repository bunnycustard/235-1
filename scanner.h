#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <vector>

#include "token.h"

enum state{init, WhiteSpaceState, CharState, SpecialState, FinalState, IDState, CommentState, StringState, EOFState};

class Scanner{
	protected:
		ifstream file;
		string fileName;
		char char1;
		char char2;
		int line1;
		state state1;
		string facts;
		bool char2val;
		int initial;

		Token states();
		int getLine();
		string getWords();
		bool findWhiteSpace();

	public:
		Scanner(string inputfile);
		~Scanner();
		void tokenize();

		vector <Token> tokens;
};



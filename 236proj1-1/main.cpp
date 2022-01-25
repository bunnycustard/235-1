#include "scanner.h"

int main(int argc, char* argv[]){
	if(!argv[1]){
		cout << "no file given" << endl;
		cout << "Total Tokens = 0" << endl;
	}
	else{
		string file = argv[1];
		Scanner scanner1(file);  
		scanner1.tokenize();
		for(unsigned int i = 0; i < scanner1.tokens.size(); i++){
			cout << scanner1.tokens.at(i).toString() << endl;
		}
		cout << "Total Tokens = " << scanner1.tokens.size() << endl;
	}
	return 0;
}
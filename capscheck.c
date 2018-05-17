#include "capscheck.h"

/**
Objective:
Write a program that takes one command line argument and checks
if there are any capital letters in the word

--

no error checking needed
assume user always enters only 1 argument
**/

int lengthdog();

int main(int argc, char **argv) {

	if(argv[1] == NULL){
		printf("Not enough arguments entered. u dun goof'd, boi\n");
		return 0;
	}

	char value;
	int i;
	int stringLength = lengthdog(argv[1]);

	for(i = 0;i<stringLength;i++){
		value = argv[1][i];

		if((value > 65) && (value < 90)){	//if ascii value is capital ascii, return "capital detected"
			printf("Capital Detected\n");secret();
			return 0;
		}
	}
	printf("No Capital Detected\n");
}

int lengthdog(char s[]){
	int i = 0;

	while(s[i] != '\0') {
		i++;
	}

	return i;
}
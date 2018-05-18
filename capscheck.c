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
	int i, j;
	//int j;
	int stringLength;

	for(j = 1;j<argc;j++){	//traverses the arguments
		stringLength = lengthdog(argv[j]);	//counts the length of the string in an argument

		for(i = 0;i<stringLength;i++){	//traverses the string in an argument
			value = argv[j][i];			// = the char of argument 'j' at index 'i'

			if((value >= 65) && (value <= 90)){	//if ascii value is capital ascii, return "capital detected"
				printf("Capital Detected\n");secret();
				return 0;
			}
		}
	}
	printf("No Capital Detected\n");
}

int lengthdog(char s[]){
	int i = 0;

	while(s[i] != '\0') {
		//printf("%c\n", s[i]);
		i++;
	}

	return i;
}
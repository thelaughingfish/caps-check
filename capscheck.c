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
void secret();

int main(int argc, char **argv) {
	char value;
	int i;
	int stringLength = lengthdog(argv[1]);

	for(i = 0;i<stringLength;i++){
		value = argv[1][i];

		if((value < 97) || (value > 122)){	//if ascii value is not a lowercase ascii, return "capital detected"
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
void secret(){
	int i = 0;
	i==1?printf("イーブイはいいポケモン。ね。\n"):printf("");
}
#include<stdio.h>
#include <string.h>
#include "txtfind.h"
#define line 256
#define word 30


int main(){

	char str[word];
	getword(str);
	char Case[2];
	getword(Case);
	printf("%s\n",str);
	printf("%s\n",Case);

	switch(Case[0])
	{
	case('a'):
			for(int i=0;i<250;i++){
				char Line[line];
				getLine(Line);
				if(substring(Line,str)){
					printf("%s\n",Line);
				}
			}
	break;
	case('b'):
			for(int i=0;i<250;i++){
				char Line[line];
				getLine(Line);
				int j=0;
				while(*(Line+j)!='\0'){
					char Word[word];
					getword(Word);
					if(similar(str,Word,1)){
						printf("%s\n",Word);
					}
					j++;
				}

			}

	break;
	default:
		printf("Not according the options\n");
	}






	return 0;
}

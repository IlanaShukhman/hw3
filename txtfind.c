#include <stdio.h>
#include <string.h>
#include "txtfind.h"
#define LINE 256
#define WORD 30



int getLine(char s[]){
	fgets(s,LINE,stdin);
	int i=0;
	while(s[i]!='\n' && s[i]!='\0'){
		i++;
	}
	return i;


}
int getword(char* w){
	scanf("%s\n",w);
	int count=0;
	while(*(w+count)!=' ' && *(w+count)!='\0' && *(w+count)!='\t' && *(w+count)!='\n'){
		count++;
	}

	return count;
}

int isEqualsStringN(char*str1,char*str2,int n){
	for (int i=0;i<n;i++) {
		if(*(str1+i)!=*(str2+i)){
			return 0;
		}
	}
	return 1;
}


int substring(char*str1,char*str2){
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i;
	for (i=0;i<=len1-len2;i++){
		if(isEqualsStringN(str1+i,str2,len2)){
			return 1;
		}
	}
	return 0;


}
int similar(char*s,char*t,int n){
	int count =0;
	int i=0;
	int j=0;
	while(*(t+i)!='\0' && *(s+j)!='\0'){
		if(*(t+i)==*(s+j)){
			i++;
			j++;
		}
		else{
			count++;
			i++;
		}
	}
	if(*(t+i)=='\0' && *(s+j)!='\0'){
		count+=(strlen(s)-j);
	}
	else if(*(t+i)!='\0' && *(s+j)=='\0'){
		count+=(strlen(t)-i);
	}
	if(count<=n)
		return 1;
	return 0;

}

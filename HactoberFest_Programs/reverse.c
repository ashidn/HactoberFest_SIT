#include<stdio.h>
#include<string.h>

int main(){
	int size, i;
	char str[50];
	do{
		printf("\nEnter a string: ");
		gets(str);
		size = strlen(str)-1;
		for(i=0; i<=size/2; i++){
			if(str[i] != str[size-i])
				break;
			printf("\n%c\t%c", str[i], str[size-i]);
		}
		if(i > size/2)
			printf("\nPalindrome");
		else
			printf("\nNot Palindrome");
	}while(str != "end");
}

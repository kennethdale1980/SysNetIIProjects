/*************************
 *	@author Kenneth Dale
 *	Josh Shinde
 *	@info COP4635
 *	Project1
 *	bbmenu.c
 *	@date 02.09.2018
 ************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"bbmenu.h"

int main(int argc, char **argv)
{
	handleSelection();

	return 0;
}

int getSelection()
{
	int selection = 5;;

	printf("BULLETIN BOARD\n");
	printf("--------------\n\n");

	printf("1)  Write a message.\n");
	printf("2)  Read a message.\n");
	printf("3)  List messages.\n");
	printf("4)  Exit Bulletin Board.\n\n");
	
	do{
		printf("Enter selection:  ");
		scanf("%i", &selection);

		if(selection < 0 || selection > 4){
			printf("Invalid selection.  Try again.\n");
		}
	} while(selection < 0 || selection > 4);
	
	return selection;
}

void handleSelection()
{
	switch(getSelection()){
		case 1:  
			printf("CASE 1\n");
			break;
		case 2:  
			printf("CASE 2\n");
			break;
		case 3:  
			printf("CASE 3\n");
			break;
		case 4:  
			printf("Goodbye!\n");
			return;
		default:  
			printf("ERROR");
			exit(1);
	}
}

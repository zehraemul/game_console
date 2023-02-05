#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	int flag=1;
	char choose1;
	int choose;
	system("COLOR 0A");
	printf(" Welcome to our game console application called XXX!\n");
	printf(" You can perform the action you want to do by clicking one of the options you see below.\n");
	printf(" Do you want to change theme color? (Y)es or (N)o\n");
	scanf("%c",&choose1);
	if(choose1=='Y'){
		system("COLOR E5");
		system("cls");
	}else if(choose1=='N'){
		system("COLOR 0A");
		system("cls");
	}
	while(flag){
		printf(" For play The Snake Game, press '1'\n");
		printf(" For play The Hangman Game, press '2'\n");
		printf(" For play The Card Matching Game, press '3'\n");
		
		printf(" For quit the console, press '5'\n");
		scanf("%d",&choose);
		if(choose==1){
			printf(" The Snake Game\n");
			
		}else if(choose==2){
			printf(" The Hangman Game\n");
			
		}else if(choose==3){
			printf(" The Card Matching Game\n");
			
		}else if(choose==5){
			printf(" Thank you for trying XXX! We hope to see you here again!! Take care until next time <3\n");
			
			flag--;
		}else{
			printf(" Wrong input try again\n");
		}
	}
	return 0;
}

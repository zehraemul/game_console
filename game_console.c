#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
	int flag=0;
	char choose1;
	int choose;
	system("COLOR 0A");
	printf("Welcome to our game console application called XXX!\n");
	printf("You can perform the action you want to do by clicking one of the options you see below.\n");
	printf("Do you want to change theme color? Yes(Y) or No(N)\n");
	scanf("%c",&choose1);
	if(choose1=='Y'){
		system("COLOR E5");
		system("cls");
	}else if(choose1=='N'){
		system("COLOR 0A");
		system("cls");
	}
		while(flag==0){
		printf("For play The Snake Game, press '1'\n");
		printf("For quit the console, press '5'\n");
		scanf("%d",&choose);
		if(choose==1){
			printf("snake game\n");
		}
		else if(choose==5){
			printf("Thank you for trying XXX! We hope to see you here again!! Take care until next time <3\n");
			flag=1;
		}
	}
	return 0;
}

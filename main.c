#include <stdio.h>
#include <stdlib.h>
int inputType(char* message){
	int type=0;
	for(int i =0;i<strlen(message);i++){
		if(*(message+i)>=97 && *(message+i)<122 || *(message+i)==32){
			type=1;
			//string girilirse 1 dondur
		}
		else type = 2;
		//crypto ise 2 dondur;
	}
	return type;
}

int main(int argc, char *argv[]) {
char message[1000];
char *msg = message;
	gets(message);
int num,i,length=strlen(message);
char three[10],two[10];
char letter;
	if(inputType(message)==1){
		for(int i =0;i<length;i++){
			num = *(msg+i);
			if(num==32){
				printf(" ");
				continue;
			}
			printf("%d ",num);
		}
	}
	else if(inputType(message)==2){
	while(i<length){


		if(*(message+i+3)==' '
		 && *(message+i)>=97 && *(message+i)<=122 &&
		*(message+i+1)>=97 && *(message+i+1)<=122  &&
		*(message+i+2)>=97 && *(message+i+2)<=122){
		three[0]=*(message+i);
		three[1]=*(message+i+1);
		three[2]=*(message+i+2);
		num = atoi(three);
			printf("%c",num);
			i+=4;
			//0 1 2 3 4
		}
		else if(*(message+2)==' ' &&
		*(message+i)>=97 && *(message+i)<=122 &&
		*(message+i+1)>=97 && *(message+i+1)<=122){
		two[0]=*(message+i);
		two[1]=*(message+i+1);
		num = atoi(two);
		printf("%c",num);
			i+=3;
		}
		//bosluk
		else if(*(message+i)==32 && *(message+i+1)==32){
			printf(" ");
			i++;
		}
		//2 rakamliysa
		else if(*(message+i)>=97 && *(message+i)<=122 &&
				*(message+i+1)>=97 && *(message+i+1)<=122){
					two[0] = *(message+i);
					two[1]= *(message+i+1);
					num = atoi(two);
					printf("%c",num);
					i+=3;
				}
				//3 rakakmliysa
		else if(*(message+i)>=97 && *(message+i)<=122 &&
				*(message+i+1)>=97 && *(message+i+1)<=122 &&
				*(message+i+2)>=97 && *(message+i+2)<=122){
					three[0] = *(message+i);
					three[1]= *(message+i+1);
					three[1]= *(message+i+2);
					num = atoi(three);
					printf("%c",num);
					i+=4;
				}
		else{
			printf("yanlis giris");
		}

		}
	}
	return 0;
}

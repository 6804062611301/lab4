#include <stdio.h>
int main() {
	int score,i,k,l;
	scanf("%d",&i);
	for(k=1; k<=i; k++){
		scanf("%d",&score);
		if(score>=0){
			if(score<=100){
				if (score>=68){
					if (score>=75){
						if(score>=85){
							printf("%d",score);
							printf("(A)\n");
						}
						else{
							printf("%d",score);
							printf("(B)\n");
						}
					}
					else{
						printf("%d",score);
						printf("(C)\n");
					}
				}
				else{
					if(score>=63){
						printf("%d",score);
						printf("(D)\n");
					}
					else{
						printf("%d",score);
						printf("(F)\n");
					}
				}
			}
			else
			printf("Error");
		}
		else
			printf("Error");
	}
}
	

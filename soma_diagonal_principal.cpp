#include<stdio.h>

int main(){
	
	int x[4][4], i, s;
	
	for(s=0;s<4;s++){
		for(i=0;i<4;i++){
			printf("matriz [%d][%d]:",s ,i);
			scanf("%d",&x[s][i]);
		}
	}
	
	s=0;
	for(i=0;i<4;i++){
		s+=x[i][i];
	}
	
	printf("a soma da diagonal principal eh %d",s);
	
}

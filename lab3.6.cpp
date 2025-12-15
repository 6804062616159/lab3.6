#include<stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if (score > 100) {
		printf("ERROR SCORE");
}
	else if (score >= 85) {
		printf("A");
}
	else if (score >= 75) {
		printf("B");
	}
	else if (score >= 68) {
		printf("C");
		printf("need more %d score to get B",75-score);
	}	
	else if (score >= 55) {
		printf("D");
}
	else if (score < 0) {
		printf("ERROR SCORE");
	} 
	
	else {
		printf("F");
}
}


#include <stdio.h> 

int main () {
	int x;
	int score;
	dias:
		score=0;
		printf ("posa paidia eixe o dias;\n");
		printf ("1)10\n2)30\n3)50\n4)100\n");
		scanf ("%d",&x);
		if  (x==4) {
		 printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
	    printf ("posa abilities eixe o dias;\n");
	    printf ("1)1\n2)2\n3)3\n4)4\n");
	    scanf ("%d",&x);
	    if (x==4) {
	     printf("correct\n");
	    score++;
		}
		else {
			printf ("wrong\n");
		}
	    
	    printf ("posa paidia eixe o dias me thn hera;\n");
	    printf ("1)0\n2)1\n3)2\n4)3\n");
	    scanf ("%d",&x);
	    if (x==3) {
	    	printf("correct\n");
	    	score++;
		}
		else {
			printf ("wrong\n");
		}
		
		printf ("posa aderfia eixe o dias;\n");
		printf ("1)3\n2)5\n3)7\n4)10\n");
		scanf ("%d",&x);
		if  (x==2) {
		 printf("correct\n");
		score++;
	    }
		else {
			printf ("wrong\n");
		}
		
		printf ("poses ginekes eixe o dias;\n");
		printf("1)3\n2)5\n3)6\n4)7\n");
		scanf ("%d",&x);
		if (x==7) {
		 printf("correct\n");
		score++;
		}
		else {
			printf("wrong\n");
		

		
			goto dias;
		} return:0; 
		}

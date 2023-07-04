#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	char s[10], m[10];

	scanf("%d", &t);
	while(t--){
	    scanf("%s %s", s, m);
	    for(int i=0;i<5;i++){
	        if(s[i] == m[i]){
	            printf("G");
	        }
	        else{
	            printf("B");
	        }

        }
        printf("\n");
	}
	return 0;
}


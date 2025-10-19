#include <stdio.h>

int main() {
	int marks, pass[10], fail[10];
	printf("enter quiz marks: ");
	for(int i=0; i<=9; i++){
	    scanf("%d", &marks);
	    if(marks<0 && marks>10)
	    break;
	    if(marks>=0 && marks<5)
	    fail[i]=marks;
	    if(marks>=5 && marks<=10)
	    pass[i]=marks;
	}
	
	for(int i=0; i<=9; i++){
	    printf("%d %d", pass[i], fail[i]);
	}
    return 0;
}

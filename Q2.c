#include <stdio.h>

int main() {
	int Array[10];
	int num, count=0;
	
	printf("Enter 10 numbers: \n");
	for(int i=0; i<=9; i++){
		scanf("%d", &Array[i]);
	}
	
	printf("Enter the number to search: ");
	scanf("%d", &num);
	
	for(int i=0; i<=9; i++){
	    if(num==Array[i])
	        count++;
	}
	
	if(count>0){
	    printf("\nNumber %d occured %d time(s).", num, count);
	} else{
	    printf("\nnumber not found.");
	}
	
    return 0;
}

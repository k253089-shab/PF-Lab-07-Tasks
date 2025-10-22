#include <stdio.h>

int main() {
    int Arr[10], dif;
    int max=0, min=999999;
    
    for(int i=0; i<=9; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &Arr[i]);
        
        if(Arr[i]>max){
            max=Arr[i];
        }
        if(Arr[i]<min){
            min=Arr[i];
        }
    }
    
    dif=max-min;
    printf("\nThe difference between maximum and minimum number is: %d", dif);
    
    return 0;
}

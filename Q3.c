#include <stdio.h>

int main()
{
    int marks, pass[10], fail[10];
    int pcount=0, fcount=0;
    int psum=0, fsum=0, pavg, favg;
    printf("Enter quiz marks of students out of 10 (-1 to stop): \n");
    
    for(int i=0; i<=9; i++){
        scanf("%d", &marks);
        
        if(marks==-1)
        break;
        else if(marks>=5 && marks<=10){
            pass[pcount]=marks;
            pcount++;
        } else if(marks>=0 && marks<5){
            fail[fcount]=marks;
            fcount++;
        } 
    }
    
    
    printf("\nPass student marks: ");
    for(int i=0; i<pcount; i++){
        printf("%d ", pass[i]);
        psum+=pass[i];
    }
    printf("\nFail student marks: ");
    for(int i=0; i<fcount; i++){
        printf("%d ", fail[i]);
        fsum+=fail[i];
    }
    
    pavg=psum/pcount;
    favg=fsum/fcount;
    printf("\nAverage of pass students: %d", pavg);
    printf("\nAverage of fail students: %d", favg); 
    
    return 0;
}

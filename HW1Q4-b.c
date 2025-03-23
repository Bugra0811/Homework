#include <stdio.h>
#include <math.h>

void computehomevalue(int popularity,int size,int *homevalue);  

int main()
{
    int popularity,size,homevalue;
      
    printf("Please enter popularity: ");
    scanf("%d", &popularity);

    printf("Please enter size: ");
    scanf("%d", &size); 

    computehomevalue(popularity, size, &homevalue); 
    printf("Home value is: %d\n", homevalue); 

    return 0;
}

void computehomevalue(int popularity, int size, int*homevalue) 
{
    int sizepow = pow(size, 2);        
    int popularitypow = pow(popularity, 3);  

    *homevalue = (popularitypow + sizepow) * 10000; 
}

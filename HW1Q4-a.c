#include <stdio.h>
#include <math.h>

int computehomevalue(int popularity, int size);  

int main()
{
    int popularity,size,homevalue;
     
    printf("Please enter popularity: ");
    scanf("%d", &popularity);

    printf("Please enter size: ");
    scanf("%d", &size); 

    homevalue = computehomevalue(popularity,size); 
    printf("Home value is: %d\n", homevalue); 

    return 0;
}


int computehomevalue(int popularity, int size) 
{
    int sizepow = pow(size,2);        
    int popularitypow = pow(popularity,3);  
	
    return (popularitypow + sizepow)*10000; 
}

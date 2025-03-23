#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	int popularity,size,homevalue;
    
    printf("Please enter popularity:");
    scanf("%d:",&popularity);
    
    printf("Please enter size:");
    scanf("%d:",&size);
    
    homevalue=((popularity*popularity*popularity) + (size*size))*10000;
    
    printf("homevalue is :%d",homevalue);
	
	return 0;
}

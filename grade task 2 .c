#include<stdio.h>
int main()
{ 
    int n ;
    scanf("%d",&n);
    printf("%s", n>85?"Grade A":(n>70?"Grade B":(n>55?"Grade C":(n>40?"Grade D":"Grade F" ))));
    return 0; 
    
}

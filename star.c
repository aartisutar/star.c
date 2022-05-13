#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rows,i,j,k;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++){    //print upper part
    for(j=1; j<=i; j++){
      printf(" ");
}
for(k=i; k<=rows; k++){
      printf("*");//print star to upper part
      printf(" ");
}
printf("\n");//move to next line
}
for(i=rows-1; i>=1; i--){  //print lower part
    for(j=1; j<=i; j++){
      printf(" ");
}
for(k=i; k<=rows; k++){
      printf("*");//print star to lower part
      printf(" ");
}
printf("\n");//move to next line
}
getch();
return 0;
}

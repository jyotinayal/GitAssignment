#include <stdio.h>
void add(int a,int b)
{
    printf("Addition is %d",  a + b);
}
void subtract(int a,int b)
{
	
	printf("\nSubtraction is %d",  a - b);
}
int main()
{
  //Initialize variable and rename
   int first_num=0;
   int second_num=0;

    printf("Enter two operands: ");
    scanf("%d %d", &first_num, &second_num);
    add(first_num,second_num);
    subtract(first_num,second_num);
    return 0;
}
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int persamaan1(int input)
{
	int result;
	for(int i = 1; i<=input; i++)
	{
		result+=i;
	}
	return result;
}

int persamaan2(int input)
{
	return ((input*(input+1))/2);
}

int main(void) {
	
	int integer, hasil1, hasil2;
	
	printf("Masukkan integer:");
	scanf("%d",&integer);
	
	hasil1 = persamaan1(integer);
	hasil2 = persamaan2(integer);
	
	printf("Hasil1:%d  Hasil2:%d",hasil1, hasil2);
	
	if(hasil1==hasil2)printf(" Hasilnya sama");
	else printf(" Hasilnya beda");
	
	
	return 0;
}

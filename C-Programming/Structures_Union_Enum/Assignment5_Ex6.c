/*
EX6: write the output of this program 

#include <stdio.h>
union job
{ //defining a union 
	char name[32];
 	float salary; 
	intworker_no; 
}u; 
struct jobl
{ 
	char name[32]; 
	float salary;
 	intworker_no; 
}s; 
int main()
{ 
	printf("size of union =%d",sizeof(u));
 	printf("\nsize of structure = %d", sizeof(s));
 	return 0; 
} 


Output:

size of union=32
size of stucture=40
*/
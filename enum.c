#include<stdio.h>


enum example{a=1,b,c};
enum example example1 = 2;
enum example answer()
{
	return example1;
}
int main(){
	if(answer() == a)
	    printf("yes\n"); 

	else
	    printf("no\n");
	    
	return 0;
}


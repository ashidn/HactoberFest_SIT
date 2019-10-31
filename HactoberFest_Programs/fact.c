#include<stdio.h>
int fact(int num){
	if(num<=1)
		return 1;
	else{
		int factval = 1;
		int i;
		for(i=num; i>1; i--)
			factval = factval*i;
		return factval;
	}
}
int main(){
	int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	int res=fact(num);
	printf("\nFactorial of %d is : %d\n",num,res);
	return 0;
}

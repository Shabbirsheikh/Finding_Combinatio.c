#include<stdio.h>
int fact(int n){
	long long int f=1;
	int i=n;
	while(i>0){
		f*=i;
		i--;
	}
	return f;
}
int main(){
	long long int n,r;
	printf("Enter values of n and r\n");
	scanf("%lld %lld",&n,&r);
	long long int c;
	if(r>n)
	{
		printf("Invalid Input");
	}
	else{
	
	c=fact(n)/(fact(n-r)*fact(r));
	printf("%dC%d=%lld",n,r,c);
	}
	return 0;
}

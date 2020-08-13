#include<stdio.h>
int main()
{
    int n,i,flag=0;

    scanf("%d",&n);
    if(n==1){
        printf("niether");
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        {
		
        printf("not a prime number");
        flag=1;
        break;
    }
	}
	        if(flag==0)
            printf("is a prime number");

    return 0;
}

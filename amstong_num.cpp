#include<stdio.h>
int ams_num(int arr[100],int n);
int main(){
	int n,a[100],i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
	scanf("%d",&a[i]);
	ams_num(a,n);
		
	}
	return 0;
}
int ams_num(int arr[100],int n)
{
	int i,temp,rem,sum;
	for(i=0;i<=n;i++){
		sum=0;
	temp=arr[i];
	while(arr[i]!=0){
	
	rem=arr[i]%10;
	sum=sum+rem*rem*rem;
	arr[i]/=10;
}
}

    if(temp==sum)

     printf("yes\n");
    else
     printf("no\n");

 
}



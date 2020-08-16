#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[10],temp;
	int i,len,flag=0,j;
	
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<=len;i++){

	str[i]=tolower(str[i]);
}
for(i=0;i<len-1;i++){
	for(j=i+1;j<len;j++){
		if(str[i]>str[j]){
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			
		}
	}
}
printf("%s\n",str);

          for(i=0;i<=len;i++){

	     	while(str!='\0'){
			if(str[i]==str[i+1])
			flag=1;
			break;
		}
	}

	if(flag==1)
	printf("false");
	else
	printf("true");

return 0;
}

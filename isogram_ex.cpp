#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char str[10];
	int i,len,flag=0;
	;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<=len;i++){

	str[i]=tolower(str[i]);
}
for(i=0;i<=len;i++){

		while(str!='\0'){
			if(str[i]==str[i+1])
			flag=1;
			break;
		}
}
	if(flag==0)
	printf("false");
	else
	printf("true");

return 0;
}

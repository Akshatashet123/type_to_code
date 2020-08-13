#include<string.h>
#include<stdio.h>
int main()
{
	char str[50]={"my_name_is_edcast_future_skills"};
	const char s[2]="_";
	char *res;

	res=strtok(str,s);
	while(res!=NULL){

	printf("%s\n",res);
	res=strtok(NULL,s);
}
return 0;

}

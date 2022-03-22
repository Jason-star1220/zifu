#include"stdio.h"
#include"string.h"
int main()
{
    printf("请输入句子：");
	char a[1000];
	gets(a);
	printf("请输入需查找的单词：");
	char b[10];
	gets(b);
	strlwr(a);
	strlwr(b);
	int alen=strlen(a);
	int blen=strlen(b);
	int cnt=0;
	for(int i=0;i<=alen-blen;i++)
	{
		char tempw[10];
		tempw[blen]='\0';
		for(int j=0;j<blen;j++)
		{
			tempw[j]=a[i+j];
		}
		if(strcmp(tempw,b)==0)
		{
			cnt++;
		}
		
	}
	printf("%d",cnt);
	return 0;
}
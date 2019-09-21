#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int n,i,j=0;
	char a[n][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;a[i][j]!='\0';j++){
			scanf("%c",a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		puts(a[i]);
	}
	return 0;
}

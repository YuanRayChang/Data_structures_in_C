#include <stdio.h>
#define MAXLINE 20
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max = 0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while( (len = getline(line, MAXLINE)) > 0){
		if(len > max){
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0){
		printf("Longest line:\n%s\n", longest);
	}


	getchar();
	return 0;
}

int getline(char line[], int maxline){
	int c, i;
	for(i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++){
		line[i] = c;
	}
	if(c=='\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0'; //因為要用%s，所以要補'\0'

	return i;
}

void copy(char to[], char from[]){
	int i = 0;
	while((to[i] = from[i]) != '\0'){
		i++;
	}
}

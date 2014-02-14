#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *inFile;
	int x, b, n = -1, i;
	char a[1000];

	inFile = fopen("a.txt", "r");
	b = fscanf(inFile, "%c", &x);
	
	while(b != -1){
		n++;
		a[n] = x;
		b = fscanf(inFile, "%c", &x);
	}
  
	for (i = 0; i <= n; i++)
	{
		if(a[i] == ' ')
			a[i] = a[n-1];
		printf("%c", a[i]);
	}
  
	printf("\n");
	fclose(inFile);
}

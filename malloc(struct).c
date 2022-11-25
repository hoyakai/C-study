#include <stdio.h>
#include <stdlib.h>

struct People{
	char name[100]
	int age;
	float height;
	float weight;
	char address[200];
};

int main(void)
{
	int n;
	struct People a;
	struct People b[100];
	printf("인원수:");
	scanf("%d",&n);
	struct People * sp = (struct People *)malloc(sizeof(struct People)*n);
	free(sp);
	return 0;
}

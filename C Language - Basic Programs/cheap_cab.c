#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        int X,Y;
        scanf("%d%d", &X, &Y);
    if (X<Y) {
        printf("FIRST\n");
    }
    else if (Y == X) {
        printf("ANY\n");
    }
    else {
        printf("SECOND\n");
    }
}
	return 0;
}


#include <stdio.h>

int main() {
	int matrix1[5][5], matrix2[5][5], sum[5][5], i, j,m,n,p,q;
	scanf("%d%d",&m,&n);
	scanf("%d%d", &p, &q);
	
for(i = 0; i < m; i++){
for(j = 0; j < n; j++)
	scanf("%d", &matrix1[i][j]);
}
for(i = 0; i < p; i++){
for(j = 0; j < q; j++)
	scanf("%d", &matrix2[i][j]);
}
for(i = 0; i < m; i++){
	for (j = 0; j < n; j++)
		sum[i][j] = matrix1[i][j] + matrix2[i][j];
}
for(i = 0; i < m; i++){
	for(j = 0; j < n; j++);{
	printf("%d\n", sum[i][j]);
	}
}
return 0;
}

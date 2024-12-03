#include <stdio.h>

int main() {
    int n, m;
    
    printf("Nhap vao so dong: ");
    scanf("%d", &m);
    printf("Nhap vao so cot: ");
    scanf("%d", &n);
    int num[n][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu thu %d  hang %d ",j+1,i+1);
			scanf("%d", &num[i][j]); 
        }
    }

    
    for (int i = 0; i < m; i++) {       
        for (int j = 0; j < n - 1; j++) {
            for (int a = j + 1; a < n; a++) {
                if (num[i][j] > num[i][a]) {
                    
                    int temp = num[i][j];
                    num[i][j] = num[i][a];
                    num[i][a] = temp;
                }
            }
        }
    }

    
    printf("Mang sau khi sap xep la :\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

void sortColumnWise(int rows, int cols, int arr[rows][cols]) {
    
    for (int col = 0; col < cols; col++) {
        for (int i = 0; i < rows - 1; i++) {
            for (int j = i + 1; j < rows; j++) {
                if (arr[i][col] > arr[j][col]) {
                   
                    int temp = arr[i][col];
                    arr[i][col] = arr[j][col];
                    arr[j][col] = temp;
                }
            }
        }
    }
}

int main() {
    int n, m;

    
    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    
    int arr[n][m];

    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    sortColumnWise(n, m, arr);

   
    printf("Ma tran sau khi sap xep tang dan theo tung cot:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


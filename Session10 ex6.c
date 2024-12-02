#include <stdio.h>

int main() {
    int arr[] = {5, 12, 7, 12, 9, 5, 12}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int num, found = 0;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);

    
    int positions[size];
    int posCount = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            positions[posCount] = i; 
            posCount++;
            found = 1; 
        }
    }

    if (found) {
        printf("So %d duoc tim thay tai cac vi tri: ", num);
        for (int i = 0; i < posCount; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay so %d trong mang.\n", num);
    }

    return 0;
}


#include <stdio.h>


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;

    
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    
    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &target);

    
    int position = linearSearch(arr, n, target);

    
    if (position != -1) {
        printf("Phan tu dc tim thay tai vi tri %d \n", target, position);
    } else {
        printf("Phan tu k ton tai trong mang\n", target);
    }

    return 0;
}


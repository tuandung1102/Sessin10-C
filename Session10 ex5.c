#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
       
        if (arr[mid] == x) {
            return mid;
        }
        
        if (arr[mid] > x) {
            right = mid - 1;
        } else { 
            left = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    bubbleSort(arr, n);

   
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    int x;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    
    int result = binarySearch(arr, n, x);

    if (result != -1) {
        printf("So %d duoc tim thay tai vi tri %d (chi so bat dau tu 0).\n", x, result);
    } else {
        printf("Khong tim thay so %d trong mang.\n", x);
    }

    return 0;
}


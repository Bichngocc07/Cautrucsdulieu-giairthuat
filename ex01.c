//
// Created by Owner on 6/17/2025.
//
#include <stdio.h>
int main() {
    int arr[100];
    int n;

    printf("Nhap so luong phan tu tu (1-100): ");
    scanf("%d",&n);

    if (n<=0 || n>100) {
        printf("So luong phan tu khong hop le!\n");
        return 0;
    }
    printf("Nhap phan tu :\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    printf("Phan tu lon nhat:%d\n", max+1);
}


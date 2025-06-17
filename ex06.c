//
// Created by Owner on 6/17/2025.
//
#include <stdio.h>
int main() {
    int arr[101];
    int n;
    int pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    if (pos<0||pos>n) {
        printf("Khong hop le\n");
        return 0;
    }
    for(int i=0;i<n;i++) {
        arr[i]=arr[i];
    }
    return 0;
}
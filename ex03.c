//
// Created by Owner on 6/17/2025.
//
#include <stdio.h>
int main() {
    int arr[100];
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
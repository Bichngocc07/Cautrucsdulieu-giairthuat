//
// Created by Owner on 6/17/2025.
//
#include <stdio.h>
int main() {
    int arr[100];
    int n;
    int pos;

    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        arr[pos] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    return 0;

}
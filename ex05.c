//
// Created by Owner on 6/17/2025.
//
#include <stdio.h>
int main() {
    int arr[100];
    int n,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    if (pos<0||pos>n) {
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++) {
        arr[i]=arr[i]+arr[i+1];
    }
    for(int i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    return 0;
}
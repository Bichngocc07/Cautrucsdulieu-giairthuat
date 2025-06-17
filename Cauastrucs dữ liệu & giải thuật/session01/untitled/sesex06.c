//
// Created by Owner on 6/17/2025.
//
int countOccurrences(int arr[], int n){
int sum=0;
for(int i=0;i<n;i++){
if(arr[i]==0){
sum++;
}
//Độ phức tạp thời gian O(n)
return sum;
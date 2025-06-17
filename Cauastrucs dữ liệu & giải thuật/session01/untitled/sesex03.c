int* malocArray(int n){
int * arr = (int*)malloc(sizeof(int)*n);
for(int i=0;i<n;i++){
arr[i] = 0;
}
//Độ phức tạp không gian : 0(n)
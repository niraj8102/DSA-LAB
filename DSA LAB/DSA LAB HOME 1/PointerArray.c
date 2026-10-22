# include<stdio.h>
int max(int *arr,int *size){
    int first = arr[0];
    for(int i = 0; i<10;i++){
        if(first<arr[i]) first = arr[i];
    }
    *size = first;
}
void main(){
    
    int arr[] = {3,6,2,66,35,10,56,11,46,99};
    int size = 10;
    max(arr,&size);
    printf("max is %d",size);
}
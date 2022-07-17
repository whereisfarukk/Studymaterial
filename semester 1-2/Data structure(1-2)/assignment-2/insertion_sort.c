#include<stdio.h>
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        printf("After inserting index %d value %d in %d  :",i,arr[j+1],j+1);
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    printf("Final sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[100]={45,67,34,23,67,54,89,76,13,23};
    insertion_sort(arr,10);
}

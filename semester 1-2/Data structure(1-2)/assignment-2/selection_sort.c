#include<stdio.h>
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
                printf("After swaping index %d value %d with index %d value %d --> ",i,arr[i],min,arr[min]);
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
                
                for(int k=0;k<n;k++){
                    printf("%d ",arr[k]);
                }
                printf("\n");
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n,arr[100]={23,56,34,57,89,96,45,24,32,10};

    selection_sort(arr,10);
}

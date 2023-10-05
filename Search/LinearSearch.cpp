#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

bool LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(key==arr[i])
            return true;
    }
    return false;
}

void inputArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
}

int main(){

    int arr[100], k, n;
    printf("Input size of array : ");
    scanf("%d", &n);
    inputArray(arr, n);
    printf("Input key value : ");
    scanf("%d", &k);
    if(LinearSearch(arr,n,k))
        printf("%d is an element of array.", k);
    else
        printf("%d is not an element of array.",k);

}
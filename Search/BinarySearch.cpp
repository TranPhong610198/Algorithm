#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

bool BinarySearch(int arr[], int key, int low, int high){
    int mid;
    while (low <= high){
        mid = low + (high-low)/2;
        
        if(arr[mid]==key)
            return true;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1 ;
    }
    return false;
}

int main(){
    int key;
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    printf("Input key : ");
    scanf("%d", &key);
    if(BinarySearch(arr, key, 0, 10))
        printf("%d is belong to this arr.", key);
    else
        printf("%d is not belong to this arr.", key);
}
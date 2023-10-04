#include<stdio.h>
#include<math.h>

// A function to print array to screen 
void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// A function to do Insertion Sort
void InsertionSort(int arr[], int n){
    int j, key;
    for(int step=1; step<n; step++){
        key = arr[step];
        j = step-1;
        while (arr[j]>key && j>= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;    
    }
}
 
int main(){
    int A[]= {5,9,1,4,3};
    int n = sizeof(A)/4;
    printf("%d\n",n);
    InsertionSort(A, n);
    printArray(A, n);
}
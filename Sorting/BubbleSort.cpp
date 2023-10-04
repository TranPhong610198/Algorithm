#include<stdio.h>
// First we need a function to swap 2 number for convenience.
void swap(int &a, int &b){
    a = a + b ;
    b = a - b ;
    a = a - b ;
}
// Now, it's the bubble sort function 
void BubbleSort(int arr[], int n){
    for (int i=0; i<n-1; i++){
        bool act = false; 
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){ 
                swap(arr[j] , arr[j+1]);
                act  = true;
            }
        }
        if (act == false)
            break;
    }
}
// Finally, the function to print array was sorted to screen
void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        printf ("%d ", arr[i]);
    }
}
int main(){
    int A[100]= {64, 34, 25, 12, 22, 11, 90};
    int n = 7;
    BubbleSort(A, n);
    printArray(A, n);
}
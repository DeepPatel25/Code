#include<stdio.h> 

// Largest Element in array

// Maximum element in this array is 45

int returnMax(int array[], int n){    
    int max = 0;
    for(int i = 0; i < n ; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int arr[]= {1,2,32,3,45,6,8};
    int max = returnMax(arr,7);
    printf("Maximum element in this array is %d",max);
    return 0;
}
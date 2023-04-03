#include<stdio.h> 

void swap(int* a,int* b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int partition(int a[],int l,int h){
    int i=l,j=h,pivot=a[l];
    do{
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j){
            swap(&a[l],&a[j]);
        }
    }while(i<j);
    swap(&a[l],&a[j]);
    return j;
}

void quickSort(int a[],int l,int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        quickSort(a,l,j);
        quickSort(a,j+1,h);
    }
}

int main(){
    
    int i;
    int d[]={33,433,221,10,278733993};
    quickSort(d,0,4);
    for(i=0;i<4;i++){
        printf("%d ",d[i]);
    }
    return 0;
}
#include<stdio.h>
#include<conio.h>
int partion(int arr[],int lb,int ub){
    
}
void quick(int arr[],int lb,int ub){
    if(lb>ub)
    {
        return ;
    }
    int q=partion(arr,lb,ub);
    quick(arr,lb,q-1);
    quick(arr,q+1,ub);
}
int main(){
    int arr[10]={12,34,54,10,5,3,89,45,76,34};
    quick(arr,0,9);
}
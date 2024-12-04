#include <stdio.h>
#include <math.h>
void bubble_sort(int arr[],int sz){
    int i = 0;
    int j = 0;
    for (int i=0;i<sz-1;i++){
        for(int j=0;j<sz-1-i;j++){
            if(arr[j>j+1]){
                int temp =arr[j];
                arr[j] =arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[] ={9,8,7,6,5,4,3,2,1,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //******数组传参时，传递的arr是数组首元素的地址，所以要在主函数里先算出来sz的长度，而不是在定义的函数里传过去
    bubble_sort(arr,sz);
    for (int i=0;i<sz;i++)
    printf("%d\n",arr[i]);
    return 0;
}
//数组名arr是首元素&arr【0】（即首元素地址） - &arr[0] = arr
//两个例外：
//1.sizeof（数组名） - 数组名表示整个数组
//2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址









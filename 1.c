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
    //******���鴫��ʱ�����ݵ�arr��������Ԫ�صĵ�ַ������Ҫ�����������������sz�ĳ��ȣ��������ڶ���ĺ����ﴫ��ȥ
    bubble_sort(arr,sz);
    for (int i=0;i<sz;i++)
    printf("%d\n",arr[i]);
    return 0;
}
//������arr����Ԫ��&arr��0��������Ԫ�ص�ַ�� - &arr[0] = arr
//�������⣺
//1.sizeof���������� - ��������ʾ��������
//2.&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ









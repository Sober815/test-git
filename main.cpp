#include <iostream>

using namespace std;
void sort(int arr[],int size)
{
    for(int i=0;i<size;i++){
        for(int j=i+1;i<size-1-i;j++){
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }

}

int main()
{
    int arr[]={12,4,89,43,21,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}

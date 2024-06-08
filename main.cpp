#include <iostream>

using namespace std;
//快排
void sort(int arr[],int left,int right)
{
   
  if(left>=right)
	  return;
  int first=left;
  int last=right;
  int key=arr[first];
  while(first<last)
  {
	  //从后往前
	  while(first<last&&key<a[last])
	  {
		  last--;//直接往前一个不变化
	  }
	  if(first<last)
	  {
		  a[first++]=a[last];
	  }
	  //从前往后
	  while(first<last&&key>=a[first])
	  {first++;}
	  if(first<last)
	  {
		  a[last--]=a[first];}
	//快排


  }
  arr[first]=key;
  //前半递归
  sort(arr,left,first-1);
  //后半递归
  sort(arr,first+1,right);
}
//ubuntu 修改的
int main()
{
    int arr[]={12,4,89,43,21,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}

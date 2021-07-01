#include<iostream>
using namespace std;

//starting from the zero index

void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void heapify(int arr[], int n, int i){
int largest =i; //arr[0];
int left =(2*i)+1;
int right =(2*i)+2;

if(left<n&& arr[left]>arr[largest])
   largest=left;

if(right<n&& arr[right]>arr[largest])
   largest=right;
   
if(largest!=i){
   swap(arr[i],arr[largest]);
   heapify(arr,n,largest);	
}   
}


void buildHeap(int arr [],int n){
	
	int start = (n/2)-1;	
	for(int i=start;i>=0;i--){
		heapify(arr,n,i);
	}
}

void heapsort(int arr[],int n){

for (int i=(n-1);i>=0;i--){	
	swap(arr[0],arr[i]);
	heapify(arr,i,0);	
}
}




void printHeap(int arr[],int n){
    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
}


int main(){
int heap []={10,34,40,25,33,20,14,9,15,19,30,25,31,11};
//int heap []={26,31,42,27,44,35,33,14,19,10};  min heap

//int heap []={36,75,63,65,21,18,15,89,70,90}; max heap


int n=sizeof(heap)/sizeof(heap[0]);
cout<<"Sizeof the heap ="<<n;

buildHeap(heap,n);
cout<<"\nThe heap is =";
printHeap(heap,n);

heapsort(heap,n);
cout<<"\nSorted heap is =";
printHeap(heap,n);
return 0;	

}

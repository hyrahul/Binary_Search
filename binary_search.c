#include<stdio.h>
int binary_search(int n,int a[],int x) {
 int low=0,mid,hig=n-1;
 while(low<=hig) {
	mid=(low+hig)/2;
	if(x>a[mid]) {
		low=mid+1;
	}
	else if(x<a[mid]) {
		low=mid-1;
	}
	else {
		return mid;
	}
 }
 return -1;
}

void main() {
 int n,i,a[100],x,p;
 n:
 printf("\nEnter the number : ");
 scanf("%d",&n);
 if(n<0) {
	printf("\n value is Invaild");
	goto n;
 }
 for(i=0;i<n;i++) {
	printf("\nEnter the number of value : ");
	scanf("%d",&a[i]);
 }
 printf("\nEnter the value of Search : ");
 scanf("%d",&x);
 p=binary_search(n,a,x);
 if(p==-1) {
	printf("\nvalue %d not Found",x);
 }
 else {
	printf("\nvalue %d is Match",p+1);
 }
}


#include<stdio.h>
void linear(int arr[],int length);

void linear(int arr[], int length)

{
    int j=0, i=0,flag=0;
    for( i=0;i<length-1;i++){ 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
    }
    arr[j++] = arr[length-1]; 
  
    for( i=0;i<j;i++){ 
        printf("%d",arr[i]);}
}      
        


int main()
{
	int i=0,j=0,n=0,number=0,t=0,temp=0;
	scanf("%d",&t);
	while(t--)
	{

	  scanf("%d",&n);
		int arr[n];
        printf("Enter a Element in arrray");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
       
        
        int length = sizeof(arr)/sizeof(arr[0]); 
        //printf("Enter a element you will be search\n");
      //  scanf("%d",&number);
         
        linear(arr,length);
    }
    return 0;
}

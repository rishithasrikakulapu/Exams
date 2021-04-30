#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//declaring sort function 
void sort_numeric(float *arr, int N, char order);

int main(){

	int sizeOfArr;
   
	printf("Enter size of the array you want to sort: ");
	
//taking user input for size of array
	scanf("%d",&sizeOfArr); 
   
//allocating memory for the input size of array
float* numArr = malloc(sizeOfArr*sizeof(float)); 

int i;
//taking user input of each array element 
   printf("Enter the array elements: ");
	for(i=0;i<sizeOfArr;i++){
	  scanf("%f",&numArr[i]);
}
  
 char *order;
	
   printf("Press \"A\" or \"a\" for Ascending order" 
	" or Press \"D\" or \"d\" for Descending order: ");
	
	scanf("%s",&order);

//calling sort function
	sort_numeric(numArr, sizeOfArr, order);

return 0;

}

//defining sort function  
void sort_numeric(float *arr, int N, char order){

  int i,j; 
  float *p = arr, temp;

//sorting in ascending order
      if(order == 'A' || order == 'a'){
	printf("Array elements sorted in asceding order are : "); 
	for(i=0;i<N;i++){
	  for(j=i+1;j<N;j++){
	   if(*(p+i) > *(p+j)){
		temp = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = temp;
           }
	  }
	 }
      }
 
//sorting in descending order     
      if(order == 'D' || order == 'd'){
	printf("Array elements sorted in asceding order are : "); 
	for(i=0;i<N;i++){
          for(j=i+1;j<N;j++){
           if(*(p+i) < *(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
           }
          }
         }
       }
	
//printing sorted elements of array
	for(i=0;i<N;i++){
		if(i==N-1)
		   printf("%f.",arr[i]);
		else
		   printf("%f ; ",arr[i]);	
	}
		printf("\n");	
}

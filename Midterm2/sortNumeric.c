#include<stdio.h>
#include<string.h>

//declaring sort_numeric function that sorts numeric arrays
void sort_numeric(float arr[], int N, char order);

int main(){

   char order;
	
   printf("Press \"A\" or \"a\" for Ascending order" 
	"or Press \"D\" or \"d\" for Descending order: ");

//taking user input for ascending or descending sort
   scanf("%c",&order);

//declaring numArray of type float
   float numArr[] = {10,0.25,-2342,12123,3.145435,6,6,5.999,-2,-5,-109.56};

//calling sort_numeric function to sort array
   sort_numeric(numArr, 11, order);

return 0;

}

//defining sort_numeric method  
void sort_numeric(float arr[], int N, char order){

  int i,j; 
//creating a float pointer that points to first array element
  float *p = &arr[0], temp;

//if user enters A or a, ascending order sort is done
      if(order == 'A' || order == 'a'){
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
      
//if user enters D or d, descending order sort is done
      if(order == 'D' || order == 'd'){
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
	
//printing out array elements after sorting
	for(i=0;i<N;i++){
	   if(i==N-1)
	      printf("%f.",arr[i]);
	   else	
	     printf("%f ; ",arr[i]);	
	}
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//declaring function to sort array
void sort_alphabetic(char *arr[], int N, char order);

int main(){

   char order;
	
   printf("Press \"A\" or \"a\" for Alphabetical order" 
	" or Press \"D\" or \"d\" for reverse Alphabetical order: ");

//taking user input for alphabetic or reverse alphabetic order
   scanf("%c",&order);
   
   char *Arr[] = {"Systems","Programming","Deep","Learning",
                  "Internet","Things","Robotics","Course"};

   int N = sizeof(Arr)/sizeof(Arr[0]);

//calling function that sorts input array
   sort_alphabetic(Arr, N, order);

return 0;

}
  
//defining sort function to sort array
void sort_alphabetic(char *Arr[], int N, char order){

  int i,j; 
  char **p = Arr,*temp;

//entering A or a outputs sorted array in alphabetic order  
      	 if(order == 'A' || order == 'a'){
	    printf("The sorted string array in alphabetic order is : "); 
	    for(i=0;i<N-1;i++){
	       for(j=i+1;j<N;j++){
	          if(strcmp(p[i], p[j])>0){
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;

          	    }
		 }
	     }
         }

      //entering D or d outputs sorted array in reverse alphabetic order
         if(order == 'D' || order == 'd'){
	     printf("The sorted string array in reverse alphabetic order is : "); 
	     for(i=0;i<N-1;i++){
              for(j=i+1;j<N;j++){
		   if(strcmp(p[i], p[j])<0){
		    temp = p[i];
		    p[i] = p[j];
		    p[j] = temp;

            }
         }
	}       
    }

  //printing out the array elements after sorting  
	for(i=0;i<N;i++){
		if(i==N-1) 
		   printf("%s.",Arr[i]);
		else
	         printf("%s ; ",Arr[i]);	
	}
	 printf("\n");

}


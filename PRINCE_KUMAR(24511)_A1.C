/* Q.1 Simple Linear Search

Write a C program to determine the missing number from an unsorted array consisting of N consecutive
positive integers, where one number is missing.    */


#include<stdio.h>
int main(){
int arr[9]={1,2,3,4,6,7,8,9};
int n=9;
int sum=0;
for(int i=0;i<n;i++){
    sum +=arr[i];
}

printf("%d is the sum of unshorted array ",sum);
int max=-1;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}

printf("\n %d is the max element ",max);
int sum1=0;
for(int i=0;i<=max;i++){
    sum1 +=i;
}
printf("\n %d is the sum of shorted array ",sum1);
int missing=sum1-sum;
printf("\n this is missing number %d",missing);


return 0;
}


/* 
 Q.2 Problem Statement

An array A is called a mountain array if its elements strictly increase up to a single peak element and
then strictly decrease after that peak.


       Your Tasks:

• Find the index of the peak element in the array.
• Rearrange the array in increasing order.

       Constraints:

• Time Complexity: O(n)
• Extra Space Complexity: O(1) (in-place modification)

*/


#include<stdio.h>
int main(){
int arr[]={4,5,6,12,24,25,23,21,20,14};
int n=9;
for(int i=1;i<n;i++){
    if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
printf("%d this index of peak element ",i);
    }
}


printf("\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            // for(int j=0;j<n;j++){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            
        }d
    }
}


    for(int i=0;i<n;i++){
        printf("%d " ,arr[i]);
    }

    
    return 0;


}
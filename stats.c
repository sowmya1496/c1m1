/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief C code for understanding git repository

 *
 * C program for calculating 
		1.mean of an array
		2.median of an array 
		3.biggest element in an array
		4.smallest number in an array
		5.sorting an array in descending order
		6.Printing Array
 *
 * @author Sowmya Narayanan
 * @date 13.09.2019
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/******************************************************************************
 * Function: find_mean
 * Description:
 *     This function takes a set of numbers and finds the mean of
 *     of the set.
 * Parameters:
 *     unsigned char * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Mean of the numbers provided.
 *****************************************************************************/

int find_mean(unsigned char *ptr, int count);

/******************************************************************************
 * Function: find_median
 * Description:
 *     This function takes a set of numbers and finds the median of
 *     of the set.
 * Parameters:
 *     unsigned char * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Median of the numbers provided.
 *****************************************************************************/
float find_median(unsigned char *ptr , int count);

/******************************************************************************
 * Function: find_maximum
 * Description:
 *     This function takes a set of numbers and finds the maximum number
 *     of the set.
 * Parameters:
 *     unsigned char  * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Maximum of the numbers provided.
 *****************************************************************************/
int find_maximum(unsigned char *ptr, int count);

/******************************************************************************
 * Function: find_minimum
 * Description:
 *     This function takes a set of numbers andfinds the minimum number
 *     of the set.
 * Parameters:
 *     unsigned char  * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     Minimum of the numbers provided.
 *****************************************************************************/
int find_minimum(unsigned char *ptr, int count);

/******************************************************************************
 * Function: Array_sort
 * Description:
 *     This function takes an array and number of elements in an array as input and sorts it in descending order.
 * Parameters:
 *     unsigned char  * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     No return value
 *****************************************************************************/
void Array_sort(unsigned char *ptr, int count);

/******************************************************************************
 * Function: print_array
 * Description:
 *     This function takes an array and number of elements in an array as input and prints it 
 * Parameters:
 *     unsigned char  * ptr: Pointer to a data set
 *     int count: Number of items in data set
 * Return: 
 *     No return value
 *****************************************************************************/
void print_array(unsigned char *ptr, int count);




int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};          //unsigned char array initilisation
  
  int mean;   // mean result variable
  int max;    //maximum number variable
  int min;    //minimum number variable
  float median;  //median result variable
  
   printf("C program\n");
  mean = find_mean(test, SIZE);
  max = find_maximum(test, SIZE);
  min = find_minimum(test, SIZE);
  printf("\nMean:%d",mean); 
  printf("\nMaximum:%d",max);
  printf("\nMinimum:%d",min);
  print_array(test, SIZE);
  Array_sort(test, SIZE);
  print_array(test, SIZE);   
  median = find_median(test, SIZE);
  printf("\nMedian:%.2f\n",median);
return 0;
}

int find_mean(unsigned char * ptr, int count)
{
  int i;
  int mean=0;
  if ( ptr == NULL){
    return 0;
  }
  
  if ( count <= 0 ) {
    count = 1;
  }
  
  for(i = 0; i < count; i++){

    mean += *ptr;

    ptr++;
  }
 
  return (mean / count);
}

void print_array(unsigned char* ptr, int count)
{
int i;

 /* if ( ptr == NULL){
    break;
  }*/
  
  if ( count <= 0 ) {
    count = 1;
  }
  printf("\nPrinting array..\n");
  for(i = 0; i < count; i++){
  if((i%8)==0)
		{
		printf("\n");
		}
   printf("%2d ",*ptr);
ptr++;


    
  }
printf("\n");
}
int find_maximum(unsigned char * ptr, int count)
{
int i = 0;
int max;
while ( i < SIZE)
{
    if ( i == 0 ) {
      max = ptr[0];    // Must initialize to values in set, not zero
    }
    
  
    if ( ptr[i] >= max){
      max = ptr[i];
    }
i++;
}
return max;
}

int find_minimum(unsigned char * ptr, int count)
{
int i = 0;
int min;
while ( i < SIZE )
{
    if ( i == 0 ) {
      min = ptr[0];    // Move to second item and start comparisons
    }
    
    if ( ptr[i] <= min){
      min = ptr[i];
    }
i++;
}
return min;
}
// function to sort the array in ascending order
void Array_sort(unsigned char *ptr , int count)
{ 
    // declare some local variables
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<count ; i++)
    {
        for(j=0 ; j<count-1 ; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp        = ptr[j];
               ptr[j]    = ptr[j+1];
                ptr[j+1]  = temp;
            }
        }
    }

    printf("\nThe array after sorting is..\n");
   
}

// function to calculate the median of the array
float find_median(unsigned char *ptr , int count)
{
    float median=0;
    
    // if number of elements are even
    if(count%2 == 0)
        median = (ptr[(count-1)/2] + ptr[count/2])/2.0;
    // if number of elements are odd
    else
        median = ptr[count/2];
    
    return median;
}

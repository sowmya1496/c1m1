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
 * @file stats.h
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
#ifndef __STATS_H__
#define __STATS_H__


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

#endif /* __STATS_H__ */

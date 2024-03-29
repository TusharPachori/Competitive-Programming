#include <iostream> 
using namespace std;

int getSingle(int arr[], int n) { 
	int ones = 0, twos = 0 ; 
	int common_bit_mask; 

	for( int i=0; i< n; i++ ) { 

		twos = twos | (ones & arr[i]); 
		ones = ones ^ arr[i]; 
		common_bit_mask = ~(ones & twos); 
		ones &= common_bit_mask; 
		twos &= common_bit_mask; 
		printf (" %d %d \n", ones, twos); 
	} 

	return ones; 
} 

int main() { 
	int arr[] = {3, 3, 2, 3}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout<<getSingle(arr, n)<<endl; 
} 

//---------------------------------------------------------------------

#include <stdio.h> 
#define INT_SIZE 32 
  
int getSingle(int arr[], int n) 
{ 
    int result = 0; 
  
    int x, sum; 
  
    for (int i = 0; i < INT_SIZE; i++) 
    { 
      sum = 0; 
      x = (1 << i); 
      for (int j=0; j< n; j++ ) 
      { 
          if (arr[j] & x) 
            sum++; 
      } 
      if (sum % 3) 
        result |= x; 
    } 
  
    return result; 
} 
  
int main() 
{ 
    int arr[] = {12, 1, 12, 3, 12, 1, 1, 2, 3, 2, 2, 3, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("The element with single occurrence is %d ", 
            getSingle(arr, n)); 
    return 0; 
}

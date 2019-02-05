#include <iostream>

using namespace std;



//void reverseArray(int numArr[], int n, int k) 
void reverseArray(int numArr[], int n, int k)
{ 
	for (int i = 0; i < n; i += k) 
	{ 
		int left = i; 

		int right = min(i + k - 1, n - 1); 
	
		while (left < right) 
			swap(numArr[left++], numArr[right--]); 

	} 
} 



int main() 

{
	int numArr[] = {1,2,3,4,5};
	int k = 5; 
	int n = 5; 
		
	reverseArray(numArr, n, k);
	//reverseArray(numArr, n);
		
		for (int i = 0; i < n; i++) 
		{
			cout << numArr[i] << " "; 
		}
			
	return 0;
}



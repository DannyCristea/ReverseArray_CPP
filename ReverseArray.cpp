#include <iostream>

using namespace std;

 
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
		
	cout << "The Array is: " << endl;
	cout << numArr[0] << " " << numArr[1] << " " << numArr[2] << " " <<  numArr[3] << " " << numArr[4] << endl;
	reverseArray(numArr, n, k);
		
		cout << "The Reverse Array is: " << endl;
		for (int i = 0; i < n; i++) 
		{
			cout << numArr[i] << " "; 
		}
			
	return 0;
}

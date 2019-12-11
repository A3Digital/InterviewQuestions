#include <algorithm>
#include<bits/stdc++.h>
#define N 100
using namespace std;
int *mergeKArrays(int arr[][N],int k);
void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int arr[N][N];
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	int *output = mergeKArrays(arr, k);
	printArray(output, k*k);
	delete [] output;
	cout<<endl;
}
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*k

#include <algorithm>

int *mergeKArrays(int arr[][N], int k)
{
 	// I don't like this problem as the memory is never freed with the given code  
    int* a = new int[k*k];
    for(int i = 0; i < k; ++i) {
        for(int j = 0; j < k; ++j) {
            a[i*k + j] = arr[i][j];
        }
    }

    std::sort(a, a+k*k);

    return a;
}
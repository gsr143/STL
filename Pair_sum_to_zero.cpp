/*
Pair sum to 0

Given a random integer array A of size N. Find and print the pair of elements in the array which sum to 0.
Array A can contain duplicate elements.
While printing a pair, print the smaller element first.
That is, if a valid pair is (6, -6) print "-6 6". There is no constraint that out of 5 pairs which have to be printed in 1st line. You can print pairs in any order, just be careful about the order of elements in a pair.
Input format :
Line 1 : Integer N (Array size)
Line 2 : Array elements (separated by space)
Output format :
Line 1 : Pair 1 elements (separated by space)
Line 2 : Pair 2 elements (separated by space)
Line 3 : and so on
Constraints :
0 <= N <= 10^4
Sample Input:
5
2 1 -2 2 3
Sample Output :
-2 2
-2 2
*/

#include <bits/stdc++.h>
using namespace std;

void pairSum(int *input, int n)
{
     	// arr - input array
        // size - size of array
        // x - sum of triplets
    unordered_map<int,int> m;
    for(int i=0;i<n;++i)
    {
        int complement=-input[i];
        if(m.find(complement)!=m.end())
        {
            int counter=m[complement];
            while(counter--)
            {
                cout<< min(input[i],complement) <<" "<<max(input[i],complement)<<endl;

            }
        }
      ++map[input[i]];
    }

}

int main()
{
	int n;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	pairSum(arr, n);

	delete[] arr;

	return 0;
}

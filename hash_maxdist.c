// C++ program to find maximum distance between two
// same occurrences of a number.
#include<bits/stdc++.h>
using namespace std;

// Function to find maximum distance between equal elements
int maxDistance(int arr[],int n)
{
    unordered_map<int,int> mp;
    int max_dist=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=i;
        }
        else
        {
            max_dist=max(max_dist,i-mp[arr[i]]);
        }
    }
    return max_dist;
    }


// Driver program to run the case
int main()
{
	int arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxDistance(arr, n);
	return 0;
}

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int binary(vector<int>, int);
vector<int> sort(vector<int>);
int indexOf(vector<int>, int);

int main()
{
    vector<int> A = {1,8,12,5,6,4,19}; // Initialized the array
    int target, res, index;

    // Reading in the element to be searched
    printf("Enter the number to be searched: ");
    scanf("%d", &target);

    // Calling binary search
    res = binary(A, target);

    if(res == -1)
    {
        printf("Element Not Found \n");
    }
    else
    {
        index = indexOf(A, target);
        printf("Element Found at index %d \n", index);
    }
    
    return 0;
}

int binary(vector<int> A, int target)
{
    int l = A.size();
    A = sort(A);
    int start = 0, end = l-1, mid=0;
    while(start<=end)
    {
        mid = end + (start-end)/2;
        if(A[mid]< target)
        {
            start = mid+1;
        }
        else if(A[mid]>target)
        {
            end = mid-1;
        }
        else if(A[mid]==target)
        {
            return mid;
        }
    }
    return -1;
}

vector<int> sort(vector<int> A)
{
    int l = A.size(), temp=0;
    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l-1; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    return A;
}

int indexOf(vector<int> A, int target)
{
    int l = A.size(), index;
    for(int i=0; i<l; i++)
    {
        if(A[i]==target)
        {
            index = i;
        }
    }
    return index;
}
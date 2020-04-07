/*
Maximum Sum Contiguous Sub-Array
Working Principle: max(A[i], sum till A[i])
*/


# include<iostream>
# include<cstdio>
# include<vector>


int main()
{
    std::vector<int> A;
    A = {-1, 2, 3, -1, 4, 6};
    int max_sum = INT32_MIN;
    int sum = 0;
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]>A[i]+sum)
        {
            sum = A[i];
        }
        else
        {
            sum = A[i]+sum;
        }
        
        if(sum>max_sum)
        {
            max_sum = sum;
        }
    }

    std::printf("Maximum Sum is: %d\n", max_sum);
    return 0;
}
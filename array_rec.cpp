# include<iostream>
# include<vector>
using namespace std;


// A simple program to print the sum array using recursion

int sumArray(vector<int>);

int main()
{
    vector<int> A = {1,2,3};
    int sum = sumArray(A);
    cout<<sum<<endl;
    return 0;
}

int sumArray(vector<int> A)
{
    if(A.size()==1)
    {
        return A[0];
    }
    else
    {
        vector<int> newVect = vector<int>(A.begin()+1, A.end());
        return A[0]+sumArray(newVect);
    }
    
}
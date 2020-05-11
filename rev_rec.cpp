# include <iostream>
# include <vector>
using namespace std;

// A simple program to reverse an array using recursion

void rev(vector<int> A, vector<int>& r, int index)
{
    if(index == A.size())
    {
        return;
    }
    else
    {
        rev(A, r, index+1);
        r.push_back(A[index]);
    }
}

int main()
{
    vector<int> A = {1,2,3,4};
    vector<int> r = {};
    rev(A, r, 0);
    for(int i=0; i<r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    cout<<"\n";
    return 0;
}


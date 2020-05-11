# include<iostream>
# include<vector>
using namespace std;


// A simple program to check if an array is sorted in ascending order or not


void check(vector<int> A, int& c, int index)
{
    if(index==A.size()-1)
    {
        return;
    }
    else
    {
        check(A, c, index+1);
        if(A[index]>A[index+1])
        {
            c=1;
        }
    }
    
}
int main()
{
    vector<int> A = {5,2,3,4};
    int c=0;
    check(A, c, 0);
    if(c==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
# include<iostream>
# include<cmath>
using namespace std;


// A simple program to convert a string to int using recursion


void toInt(string str, int& n, int index)
{
    if(index == str.length())
    {
        return;
    }
    else
    {
        toInt(str, n, index+1);
        int digit = (int)str[index] - 48;
        n += digit*(pow(10, str.length()-index-1));
    }
}


int main()
{
    string str="1234";
    int n=0;
    toInt(str, n, 0);
    cout<<n<<endl;
    return 0;
}
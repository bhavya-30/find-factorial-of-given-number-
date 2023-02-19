/*
n!=n*(n-1)*(n-2).......*1
n!=n*(n-1)!

*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    int fact=1,n=num;
    while(num!=0)
    {
         fact=fact*num;
         //cout<<fact; --->>shows every iteration
         num=num-1;
    }
    cout<<"factorial of "<<n<<" is "<<fact;
    //using for loop
    /*
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    */
    
}
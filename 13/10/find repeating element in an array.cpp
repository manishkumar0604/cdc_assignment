#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int findRepeatingElement(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        //if element is already present in set
        if(s.find(arr[i])!=s.end())
        {
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1; //no repeating element
}
int main()
{
    vector<int> arr={1,2,3,4,5,3,6,7};
    int n=arr.size();
    int repeatingElement=findRepeatingElement(arr.data(),n);
    if(repeatingElement!=-1)
    {
        cout<<"First repeating element is: "<<repeatingElement<<endl;
    }
    else
    {
        cout<<"No repeating element found"<<endl;
    }   
    return 0;
}

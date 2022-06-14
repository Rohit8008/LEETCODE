#include<iostream>
using namespace std;

class Searching
{
    int n;
    int *ary;
    public:
    void setData()
    {
       cout<<"Enter N:";
        cin>>n;

        ary=new int[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter Value at Array["<<i<<"]";
            cin>>ary[i];
        } 
    }

    void BinarySearch()
    {
        int beg=0,end=n-1;
        int mid,wanted;
        cout<<"Enter Element You Want to Search for : ";
        cin>>wanted;
        while(beg<=end)
            {
                mid=(beg+end)/2;
                if(wanted==ary[mid])
                {
                    cout<<"Element "<<wanted<<" Found At : "<<mid<< " location ";
                    break;
                }
                else if(wanted>ary[mid])
                    beg=mid+1;
                else
                    end=mid-1;
            }
        if(beg>end)
            cout<<"\nThe number, "<<wanted<<" is not found in given Array";
            cout<<endl;
    }

    void LinearSearch()
    {
        int wanted,count=0;
        cout<<"Enter Element You Want to Search for : ";
        cin>>wanted;
        for(int i=0;i<n;i++)
        {
            if(wanted==ary[i])
            {
                count++;
                //cout<<i<<endl;
            }
        }

        if(count==0)
        cout<<"Not Found Please Try Again with Valid Number !!!";
        else
        cout<<wanted<<" Found : "<<count<<" Times";
    }
};
int main()
{
    Searching obj;
    obj.setData();
    obj.BinarySearch();
    obj.LinearSearch();
}
#include <iostream>
using namespace std;
class MyArray
{   int n,*ary;
public:
    void setdata()
    {
        cout<<"Enter No. of element of array = ";
        cin>>n;
        ary=new int(n);
        for(int i=0;i<n;i++)
        {
            cout<<"Enter Value at Array["<<i<<"]";
            cin>>ary[i];
        }
    }

    void bubblesort()
    {
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(ary[j]>ary[j+1])
                {
                    int temp=ary[j];
                    ary[j]=ary[j+1];
                    ary[j+1]=temp;
                }
            }
        }
    }

    void BubbleSort()
    {
        for(int i = 0; i<n; i++) 
        {
            for(int j = i+1; j<n; j++)
            {
                if(ary[j] < ary[i]) 
                {
                    int temp = ary[i];
                    ary[i] = ary[j];
                    ary[j] = temp;
                }
            }
        }
    }

    void selectionsort()
    {
        int i,j,temp,min,pos;
        for(i=0;i<n-1;i++)
        {
            min=ary[i];
            pos=i;
            for(j=i;j<n;j++)
            {
                if(min>ary[j])
                {
                    min=ary[j];
                    pos=j;
                }
            }
            //swap
            temp=ary[i];
            ary[i]=ary[pos];
            ary[pos]=temp;
        }
    }

    void insertionsort()
    {
        int i,j;
        for(i=1;i<n;i++)
        {
            int temp=ary[i];
            int pw=i-1;
            while(pw>=0&& temp<ary[pw])
            {
                ary[pw+1]=ary[pw];
                pw--;
            }
            ary[pw+1]=temp;
        }
    }

    void Shellsort()
    {
        int gap=n/2;
        int fc,sc;
        while(gap>0)
        {
            fc=0;
            sc=gap;
            while(sc<n)
            {
                if(ary[fc]>ary[sc])
                {
                    int temp=ary[fc];
                    ary[fc]=ary[sc];
                    ary[sc]=temp;
                }
                fc++;sc++;
            }
            gap=gap/2;
        }
    }

    void show()
    {
        for (int i=0; i < n; i++)
        cout << ary[i]<<" ";
    }
};

int main()
{
    MyArray obj;
    obj.setdata();
    //obj.bubblesort();
    //obj.BubbleSort();
    //obj.selectionsort();
    //obj.insertionsort();
    //obj.Shellsort();
    obj.show();
}
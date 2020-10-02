#include<iostream>
using namespace std;

class time
{
public:
    int hr,minutes,sec;
    time(int hr,int minutes,int sec):hr{hr},minutes{minutes},sec{sec}{}
    time()
    {
        cin>>hr>>minutes>>sec;
    }

    bool operator<(const time &t)
    {
        if(hr<t.hr || (hr==t.hr && minutes<t.minutes) || (hr==t.hr && minutes==t.minutes &&sec<t.sec))
            return true;
        return false;
    }

    bool operator>(const time&t)
    {
        if(hr>t.hr || (hr==t.hr && minutes>t.minutes) || (hr==t.hr && minutes==t.minutes &&sec>t.sec))
            return true;
        return false;
    }

    friend ostream& operator<<(ostream& out,const time&t);
};

ostream& operator<<(ostream& out,const time&t)
{
    out<<t.hr<<" : "<<t.minutes<<" : "<<t.sec<<endl;
    return out;
}

template<class t>
void sorts(t a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
            if(a[small]>a[j])
                small=j;
        if(a[i]>a[small])
        swap(a[small],a[i]);
    }
}

template<class t>
void sorti(t a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
           {
             swap(a[j],a[j-1]);j--;
           }
    }
}

int main()
{
    time a[5];
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    sorti(a,5);
    for(int i=0;i<5;i++)
         cout<<a[i];
}


#include <bits/stdc++.h>
using namespace std;

class ps
{
    private :
    int ms,ts;
    public :
    void nhap();
    void xuat();
    void rutgon();
    int ucln( int a , int b);
    int getts();
    int getms();    
};
int ps :: getts()
{
    return this->ts;
}
int ps :: getms()
{
    return this->ms;
}
int ps :: ucln( int a , int b)
{
      if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}
void ps :: rutgon()
{
    int temp= ucln( this->ts, this->ms);
    this->ts/=temp;
    this->ms/=temp;
}
void ps :: nhap()
{
    cout<<"Tu so : ";
    cin>>this->ts;
    cout<<"Mau so : ";
    cin>>this->ms;
}
void ps :: xuat()
{
    if (this->ms<-1) cout<<-this->ts<<"/"<<-this->ms;
        else if (this->ms==-1) cout<<-this->ts;
        else if (this->ms==0) cout<<"Khong chia duoc";
        else if (this->ms==1) cout<<this->ts;
        else cout<<this->ts<<"/"<<this->ms; 
}
int ucln(int a, int b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}
void xuat(const int &tu , int &mau)
    {
        if (mau<-1) cout<<-tu<<"/"<<-mau;
        else if (mau==-1) cout<<-tu;
        else if (mau==0) cout<<"Khong chia duoc";
        else if (mau==1) cout<<tu;
        else cout<<tu<<"/"<<mau; 
    }
void rutgon(int &tu , int &mau)
{
    int temp= ucln( tu, mau);
    tu/=temp;
    mau/=temp;
}
void tong( int t1 , int m1, int t2, int m2)
{
    int t3,m3;
     if (m1==m2)
    {
        t3=t1+t2;
        m3=m1;
    }
    else if (m1<m2)
    {
        if (m2 % m1 ==0)
        {
            t3=t1*(m2/m1)+t2;
            t3=m2;
        }
        else
        {
            int temp=m1*m2;
            int x=temp/m1;
            int y=temp/m2;
            t3=t1*x+t2*y;
            m3=temp;
        }
    }
    else
    {
        if (m1 % m2 ==0)
        {
            t3=t2*(m1/m2)+t1;
            m3=m1;
        }
        else
        {
        int temp=m1*m2;
            int x=temp/m1;
            int y=temp/m2;
            t3=t1*x+t2*y;
            m3=temp;
        }
    }
    rutgon(t3, m3);
    xuat(t3, m3);
}
int main()
{
    ps a[100];
    for (int i=0; i<=1;i++)
    {
        a[i].nhap();
    }
    int b = a[0].getts();
    int c = a[0].getms();
    int d = a[1].getts();
    int e = a[1].getms();
    tong(b ,d ,c, e);
    return 0;
}
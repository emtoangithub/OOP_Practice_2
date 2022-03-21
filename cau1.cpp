#include<bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
    if (b == 0) return a;
    if (a % b == 0) return b;
    return ucln(b, a%b);
}
class phanso
{
    private:
    int tu, mau;
    public:
    phanso(double= 0 , double =1);
    void nhap();
    void xuat();
    int laytu();
    int laymau();
    void rutgon();
    phanso cong(phanso);
    phanso tru(phanso);
    phanso nhan(phanso);
    phanso chia(phanso);
};
void phanso :: rutgon()
{
    int temp= ucln( tu, mau);
    tu/=temp;
    mau/=temp;  
}
phanso ::phanso(double x , double y)
: tu(x), mau(y)
{}
int phanso :: laytu()
{
    return this->tu;
}
int phanso :: laymau()
{
    return this->mau;
}
void phanso :: nhap()
{
    cout<<"Tu so : ";
    cin>>this->tu;
    cout<<"Mau so ( khac 0 ) : ";
    cin>>this->mau;
}
void phanso :: xuat()
{
    if (mau<-1) cout<<-tu<<"/"<<-mau;
    else if (mau==-1) cout<<-tu;
    else if (mau==0) cout<<"Khong chia duoc";
    else if (mau==1) cout<<tu;
    else cout<<tu<<"/"<<mau; 
}
phanso phanso :: cong(phanso a)
{
    int tu0,mau0;
     if (this->mau == a.mau)
    {
        tu0=this->tu + a.tu;
        mau0=this->mau;
    }
    else if (this->mau<a.mau)
    {
        if (a.mau % this->mau ==0)
        {
            tu0=this->tu*(a.mau/this->mau)+a.tu;
            mau0=a.mau;
        }
        else
        {
            int temp=mau*a.mau;
            int x=temp/mau;
            int y=temp/a.mau;
            tu0=tu*x+a.tu*y;
            mau0=temp;
        }
    }
    else
    {
        if (mau % a.mau ==0)
        {
            tu0=a.tu*(mau/a.mau)+tu;
            mau0=mau;
        }
        else
        {
        int temp=mau*a.mau;
            int x=temp/mau;
            int y=temp/a.mau;
            tu0=tu*x+a.tu*y;
            mau0=temp;
        }
    }
return phanso(tu0, mau0);
}
phanso phanso ::tru(phanso a)
{
   int tu0,mau0;
     if (this->mau == a.mau)
    {
        tu0=this->tu - a.tu;
        mau0=this->mau;
    }
    else if (this->mau<a.mau)
    {
        if (a.mau % this->mau ==0)
        {
            tu0=this->tu*(a.mau/this->mau)-a.tu;
            mau0=a.mau;
        }
        else
        {
            int temp=mau*a.mau;
            int x=temp/mau;
            int y=temp/a.mau;
            tu0=tu*x-a.tu*y;
            mau0=temp;
        }
    }
    else
    {
        if (mau % a.mau ==0)
        {
            tu0=a.tu*(mau/a.mau)-tu;
            mau0=mau;
        }
        else
        {
        int temp=mau*a.mau;
            int x=temp/mau;
            int y=temp/a.mau;
            tu0=tu*x-a.tu*y;
            mau0=temp;
        }
    }
return phanso(tu0, mau0); 
}
phanso phanso ::nhan(phanso a)
{
    int tu0,mau0;
    if (tu==0 || a.tu==0) 
    {
        return phanso();
    }
    else 
    {
        tu0=tu*a.tu;
        mau0=mau*a.mau;
    }
    return phanso(tu0, mau0); 
}
phanso phanso :: chia(phanso a)
{
    int tu0, mau0;
    tu0=tu*a.mau;
    mau0=mau*a.tu;
    return phanso(tu0, mau0); 
}
int main()
{
    srand(time(NULL));
    phanso c;
    cout<<"Hay chon yeu cau\n";
    cout<<"1. Nhap gia tri tu ban phim\n";
    cout<<"2. Gia tri khoi tao ngau nhien\n";
    cout<<"Lua chon cua ban la : ";
    int lc; cin>>lc;
    if (lc==1)
    {
    phanso a,b;
    a.nhap();
    b.nhap();
    cout<<"Hai phan so vua nhap la : ";
    a.xuat(); 
    cout<<" va ";
    b.xuat();
    cout<<endl;
    cout<<"Tong hai phan so la : ";
    c = a.cong(b);
    c.rutgon();
    c.xuat();
    cout<<endl;
    c = a.tru(b);
    c.rutgon();
    cout<<"Hieu hai phan so la : ";
    c.xuat();
    cout<<endl;
    c = a.nhan(b);
    c.rutgon();
    cout<<"Tich hai phan so la : ";
    c.xuat();
    cout<<endl;
    c = a.chia(b);
    c.rutgon();
    cout<<"Thuong hai phan so la : ";
    c.xuat();
    cout<<endl;
    system("pause");
    return 0;
    }
    else if (lc == 2)
    {
    phanso a( 0 + rand() % (100 - 0 + 1),  0 + rand() % (100 - 0 + 1)), b( 0 + rand() % (100 - 0 + 1),  0 + rand() % (100 - 0 + 1));
    cout<<endl;
    cout<<"Hai phan so vua khoi tao ngau nhien la : ";
    a.xuat(); 
    cout<<" va ";
    b.xuat();
    cout<<endl;
    cout<<"Tong hai phan so la : ";
    c = a.cong(b);
    c.rutgon();
    c.xuat();
    cout<<endl;
    c = a.tru(b);
    c.rutgon();
    cout<<"Hieu hai phan so la : ";
    c.xuat();
    cout<<endl;
    c = a.nhan(b);
    c.rutgon();
    cout<<"Tich hai phan so la : ";
    c.xuat();
    cout<<endl;
    c = a.chia(b);
    c.rutgon();
    cout<<"Thuong hai phan so la : ";
    c.xuat();
    cout<<endl;
    system("pause");
    return 0;
    }
}

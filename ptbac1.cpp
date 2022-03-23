#include<bits/stdc++.h>
using namespace std;

class GiaiPTBac1
{
    private:
    double a,b;
    public:
    GiaiPTBac1(double = 0 , double = 0);
    void nhap();
    double giai();
    void xuat();
};
GiaiPTBac1 :: GiaiPTBac1(double a, double b)
: a(a), b(b)
{}
void GiaiPTBac1 :: nhap()
{
    cout<<"He so a : ";
    cin>>this->a;
    cout<<"He so b : ";
    cin>>this->b;
}
double GiaiPTBac1 :: giai()
{
    return -b/a;
}
void maume()
{
    cout<<"\n******************************************************************************\n";
}
void GiaiPTBac1 :: xuat()
{
    maume();
    if (a==0)
    {
        if (b==0)  cout<<"Phuong trinh "<<this->b<<" = 0 "<<" co vo so nghiem";
        else  cout<<"Phuong trinh "<<this->b<<" = 0 "<<" vo nghiem";
    }
    else if (a==-1)
    {
    cout<<"Phuong trinh "<<"-x";
    if (b<0) cout<<" - "<<abs(b);
    else cout<<" + "<<b;
    if (giai() == 0 || giai()== - 0) cout<<" = 0";
    else cout<<" = "<<giai();
    }
    else if (a==1) 
    {
    cout<<"Phuong trinh "<<"x";
    if (b<0) cout<<" - "<<abs(b);
    else cout<<" + "<<b;
    if (giai() == 0 || giai()== - 0) cout<<" = 0";
    else cout<<" = "<<giai();
    }
    else 
    {
    cout<<"Phuong trinh "<<this->a<<"x";
    if (b<0) cout<<" - "<<abs(b);
    else cout<<" + "<<b;
    if (giai() == 0 || giai()== - 0) cout<<" = 0";
    else cout<<" = "<<giai();
    }
    maume();
}
void xoa()
{
    system("cls");
}
void dungvaxoa()
{
    cout<<endl;
    system("pause");
    xoa();
}
int main()
{
    xoa();
    while(1)
    {
        cout<<"Hay lua chon yeu cau\n";
        cout<<"1. PT tu khoi tao gia tri a va b ( a = b = 0) \n";
        cout<<"2. PT tu khoi tao a va b tuy y ( a = 0 , b tuy y)\n";
        cout<<"3. PT a va b tuy y ( a va b tuy y )\n";
        cout<<"4. PT co he so a va b nhap tu ban phim\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Lua chon cua ban la : ";
        int lc; cin>>lc;
        xoa();
        if (lc==1)
        {
            cout<<"So PT ban muon la : ";
            int n; cin>>n;
            GiaiPTBac1 a[100];
            for (int i = 1; i <=n; i++)
            {
                cout<<"Lan thu "<<i<<endl;
                a->xuat();
            }
            dungvaxoa();
        }
        else if (lc==2)
        {
            srand(time(NULL));
            cout<<"So PT ban muon la : ";
            int n; cin>>n;
            for (int i = 1; i <= n; i++)
            {
                cout<<"Lan thu "<<i<<endl;
                GiaiPTBac1 a(0, 0 + rand() % (100 - 0 + 1));
                a.xuat();
            }
            dungvaxoa();
        }
        else if (lc == 3)
        {
            srand(time(NULL));
            cout<<"So PT ban muon la : ";
            int n; cin>>n;
            for (int i = 1; i <= n; i++)
            {
                cout<<"Lan thu "<<i<<endl;
                GiaiPTBac1 a( 0 + rand() % (100 - 0 + 1), 0 + rand() % (100 - 0 + 1));
                a.xuat();
            }
            dungvaxoa();  
        }
        else if (lc == 4)
        {
            cout<<"So PT ban muon la : ";
            int n; cin>>n;
            GiaiPTBac1 a[100];
            for (int i = 1; i <= n; i++)
            {
                cout<<"Lan thu "<<i<<endl;
                a[i].nhap();
                a[i].xuat();
            }
            dungvaxoa();
        }
        else 
        {
            cout<<"Dung chuong trinh!";
            dungvaxoa();
            return 0;
        }
    }
}
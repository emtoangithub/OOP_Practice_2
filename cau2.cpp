#include<bits/stdc++.h>
using namespace std;

void xoamanhinh()
{
    system("cls");
}
void dungroixoa()
{
    cout<<endl;
    system("pause");
    xoamanhinh();
}
class sophuc
{
    private:
    double ao,thuc;
    public:
    sophuc(double = 0, double =0 );
    void xuat();
    void nhap();
    sophuc cong(sophuc);
    sophuc tru(sophuc);
    sophuc nhan(sophuc);
    sophuc chia(sophuc);
    void dinhdangxuat( int  , sophuc  , sophuc  );// 1 : +, 2: -, 3: *, 4: /
};
void sophuc :: dinhdangxuat( int dang , sophuc a, sophuc b )
{
    if (dang==1)
    {
    cout<<"Tong hai so phuc\n";
    cout<<" ( "; a.xuat(); cout<<" ) "; cout<<" + "; cout<<" ( "; b.xuat(); cout<<" ) ";
    cout<<" = ";
    this->xuat();
    dungroixoa();
    }
    else if (dang==2)
    {
    cout<<"Hieu hai so phuc\n";
    cout<<" ( "; a.xuat(); cout<<" ) "; cout<<" - "; cout<<" ( "; b.xuat(); cout<<" ) ";
    cout<<" = ";
    this->xuat();
    dungroixoa();
    }
    else if (dang==3)
    {
    cout<<"Tich hai so phuc\n";
    cout<<" ( "; a.xuat(); cout<<" ) "; cout<<" * "; cout<<" ( "; b.xuat(); cout<<" ) ";
    cout<<" = ";
    this->xuat();
    dungroixoa();
    }
    else if (dang == 4)
    {
    cout<<"Thuong hai so phuc\n";
    cout<<" ( "; a.xuat(); cout<<" ) "; cout<<" / "; cout<<" ( "; b.xuat(); cout<<" ) ";
    cout<<" = ";
    this->xuat();
    dungroixoa();
    }
}
sophuc :: sophuc(double x, double y)
: thuc(x), ao(y)
{}
void sophuc :: nhap()
{
    cout<<"Phan thuc : ";
    cin>>this->thuc;
    cout<<"Phan ao : ";
    cin>>this->ao;
}
void sophuc :: xuat()
{
    cout<<fixed<<setprecision(3)<<this->thuc<<" + "<<fixed<<setprecision(3)<<this->ao<<"i";
}
sophuc sophuc :: cong(sophuc a)
{
    sophuc b;
    b.ao=this->ao+a.ao;
    b.thuc=this->thuc+a.thuc;
    return b;
}
sophuc sophuc :: tru(sophuc a)
{
    sophuc b;
    b.ao=this->ao-a.ao;
    b.thuc=this->thuc-a.thuc;
    return b;
}
sophuc sophuc :: nhan(sophuc a)
{
    sophuc b;
    b.thuc = this->thuc*a.thuc - this->ao*a.ao;
    b.ao = this->ao*a.thuc + this->thuc*a.ao;
    return b;
}
sophuc sophuc :: chia(sophuc a)
{
    sophuc b;
    double temp0 = pow(a.ao ,2) + pow(a.thuc ,2);
    double temp1 = thuc*a.thuc + ao*a.ao;
    double temp2 = a.thuc*ao - thuc*a.ao;
    b.thuc = temp1/temp0;
    b.ao = temp2/temp0;  
    return b;
}
int main()
{
    xoamanhinh();
    srand(time(NULL));
    while (1)
    {
        cout<<"Hay chon yeu cau cua ban\n";
        cout<<"1. Hai so phuc khong khoi tao ( a = 0 , b = 0 )\n";
        cout<<"2. Hai so phuc a khoi tao b tuy y ( a = 0 , b tuy y )\n";
        cout<<"3. Hai so phuc a tuy y b khoi tao ( a tuy y , b = 0 )\n";
        cout<<"4. Hai so phuc a b tuy y ( a tuy y, b tuy y )\n";
        cout<<"5. Hai so phuc nhap tu ban phim\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Lua chon cua ban la : ";
        int lc; cin>>lc;
        xoamanhinh();
        if (lc == 1)
        {
            cout<<"So lan phep tinh ban muon la : ";
            int n; cin>>n;
            sophuc a[n];
            sophuc b[n];
            for (int i = 1 ; i<= n; i++)
            {
                xoamanhinh();
                cout<<"Lan thu "<<i<<endl;
                sophuc c;
                c = a[i].cong(b[i]);
                c.dinhdangxuat(1, a[i], b[i]);
                c = a[i].tru(b[i]);
                c.dinhdangxuat(2, a[i], b[i]);
                c = a[i].nhan(b[i]);
                c.dinhdangxuat(3, a[i], b[i]);
                c = a[i].chia(b[i]);
                c.dinhdangxuat(4, a[i], b[i]);
            }
        }
        else if (lc==2)
        {
            cout<<"So lan phep tinh ban muon la : ";
            int n; cin>>n;
            for (int i = 1 ; i<= n ;i++)
            {
                xoamanhinh();
                cout<<"Lan thu "<<i<<endl;
                sophuc a(0,  0 + rand() % (100 - 0 + 1)),b(0,  0 + rand() % (100 - 0 + 1)),c;
                c = a.cong(b);
                c.dinhdangxuat(1, a, b );
                c= a.tru(b);
                c.dinhdangxuat(2, a, b );
                c = a.nhan(b);
                c.dinhdangxuat(3, a, b );
                c= a.chia(b);
                c.dinhdangxuat(4, a, b );
            } 
        }
        else if (lc==3)
        {
            cout<<"So lan phep tinh ban muon la : ";
            int n; cin>>n;
            for (int i = 1 ; i<= n ;i++)
            {
                xoamanhinh();
                cout<<"Lan thu "<<i<<endl;
                sophuc a(0 + rand() % (100 - 0 + 1),  0),b( 0 + rand() % (100 - 0 + 1) , 0),c;
                c = a.cong(b);
                c.dinhdangxuat(1, a, b );
                c= a.tru(b);
                c.dinhdangxuat(2, a, b );
                c = a.nhan(b);
                c.dinhdangxuat(3, a, b );
                c= a.chia(b);
                c.dinhdangxuat(4, a, b );
            } 
        }
        else if (lc == 4)
        {
             cout<<"So lan phep tinh ban muon la : ";
            int n; cin>>n;
            for (int i = 1 ; i<= n ;i++)
            {
                xoamanhinh();
                cout<<"Lan thu "<<i<<endl;
                sophuc a(0 + rand() % (100 - 0 + 1),  0 + rand() % (100 - 0 + 1)),b( 0 + rand() % (100 - 0 + 1) , 0 + rand() % (100 - 0 + 1)),c;
                c = a.cong(b);
                c.dinhdangxuat(1, a, b );
                c= a.tru(b);
                c.dinhdangxuat(2, a, b );
                c = a.nhan(b);
                c.dinhdangxuat(3, a, b );
                c= a.chia(b);
                c.dinhdangxuat(4, a, b );
            } 
        }
        else if (lc == 5)
        {
            cout<<"So lan phep tinh ban muon la : ";
            int n; cin>>n;
            sophuc a[n];
            sophuc b[n];
            for (int i = 1 ; i<= n; i++)
            {
                xoamanhinh();
                cout<<"Lan thu "<<i<<endl;
                sophuc c;
                a[i].nhap();
                b[i].nhap();
                c = a[i].cong(b[i]);
                c.dinhdangxuat(1, a[i], b[i]);
                c = a[i].tru(b[i]);
                c.dinhdangxuat(2, a[i], b[i]);
                c = a[i].nhan(b[i]);
                c.dinhdangxuat(3, a[i], b[i]);
                c = a[i].chia(b[i]);
                c.dinhdangxuat(4, a[i], b[i]);
            }
        }
        else 
        {
            cout<<"Dung chuong trinh!\n";
            dungroixoa();
            return 0;
        }
    }
}
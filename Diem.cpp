#include<bits/stdc++.h>
using namespace std;

class DIEM
{
    private:
    double x,y;
    public:
    DIEM(double =0 , double =0);
    void nhap();
    void xuat();
    void doidiem();
    double khoangcachhaidiem(DIEM);
    void kiemtratrung();
    void doixungquaO();
    double chuvi(DIEM  , DIEM );
    double dientich(DIEM, DIEM);
};
DIEM :: DIEM(double x , double y)
{
    this->x=x;
    this->y=y;
}
void DIEM :: nhap()
{
    cout<<"x : ";
    cin>>this->x;
    cout<<"y : ";
    cin>>this->y;
}
void DIEM :: xuat()
{
    cout<<"( "<<this->x<<" , "<<this->y<<" )"<<endl;
}
void DIEM :: doidiem()
{
    cout<<"Ban muon doi diem x bao nhieu : ";
    int tmp;
    cin>>tmp;
    cout<<"Ban muon doi diem y bao nhieu : ";
    int temp1;
    cin>>temp1;
    cout<<"Diem ban vua nhap la : "; this->xuat();
    x+=tmp;
    y+=temp1;
    cout<<"Diem sau khi doi la : "; this->xuat(); 
}
double DIEM :: khoangcachhaidiem(DIEM a)
{
    return sqrt(pow(this->x-a.x,2)+pow(this->y-a.y,2));
}
void DIEM :: kiemtratrung()
{
    DIEM a;
    a.nhap();
    if (this->x == a.x && this->y== a.y) 
    {
        cout<<"Hai diem trung nhau";
        a.xuat();
        this->xuat();
    }
    else 
    {
        cout<<"Hai diem khong trung nhau";
        a.xuat();
        this->xuat();
    }
}
void DIEM :: doixungquaO()
{
    if (x==0 && y!=0) {
        y=-y;
        x=0;
    }
    else if (y==0 && x!=0)
    {
        y=0;
        x=-x;
    }
    else if (x==0 && y==0 )
    {
        x=y=0;
    }
    else 
    {
        x=-x;
        y=-y;
    }
}
double DIEM ::chuvi(DIEM a, DIEM b)
{
    double x = this->khoangcachhaidiem(a);
    double y = a.khoangcachhaidiem(b);
    double z = this->khoangcachhaidiem(b);
    return x+y+z;
}
double DIEM ::dientich(DIEM a , DIEM b)
{
    double x = this->khoangcachhaidiem(a);
    double y = a.khoangcachhaidiem(b);
    double z = this->khoangcachhaidiem(b);
    double t = chuvi(a, b)/2;
    return sqrt(t*(t-x)*(t-y)*(t-z));
}
int main()
{
    DIEM a;
    while(1)
    {
        cout<<"Hay nhap yeu cau ban muon\n";
        cout<<"1. Khoi tao diem va xuat diem\n";
        cout<<"2. Di chuyen diem\n";
        cout<<"3. Kiem 2 diem co trung nhau khong\n";
        cout<<"4. Tinh khoang cach 2 diem\n";
        cout<<"5. Lay doi xung qua O\n";
        cout<<"6. Tinh chu vi tam giac\n";
        cout<<"7. Tinh dien tich tam giac\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Lua chon cua ban la : ";
        int lc; cin>>lc;
        system("cls");
        if (lc==1)
        {
            a.nhap();
            a.xuat();
            system("pause");
            system("cls");
        }
        else if (lc==2)
        {
            a.nhap();
            a.doidiem();
            system("pause");
            system("cls");
        }
        else if (lc==3)
        {
            a.nhap();
            a.kiemtratrung();
            system("pause");
            system("cls");
        }
        else if (lc==4)
        {
        a.nhap();
        DIEM b;
        b.nhap();
        cout<<"Ban yeu cau tinh khoang cach giua hai diem ";
        a.xuat(); b.xuat();
        cout<<"Khoang cach giua 2 diem tren la : "<<fixed<<setprecision(3)<<a.khoangcachhaidiem(b);
        system("pause");
            system("cls");
        }
        else if (lc==5)
        {
            a.nhap();
            a.doixungquaO();
            a.xuat();
            system("pause");
            system("cls");
        }
        else if (lc==6)
        {
            a.nhap();
            DIEM c,b;
            c.nhap();
            b.nhap();
            cout<<"Chu vi la : "<<fixed<<setprecision(3)<<a.chuvi(b,c);
            system("pause");
            system("cls");
        }
        else if (lc==7)
        {
            a.nhap();
            DIEM c,b;
            c.nhap();
            b.nhap();
            cout<<"Chu vi la : "<<fixed<<setprecision(3)<<a.dientich(b,c);
            system("pause");
            system("cls");
        }
        else 
        {
            cout<<"Dung chuong trinh!\n";
            system("pause");
            system("cls");
            return 0;
        }
    }
}
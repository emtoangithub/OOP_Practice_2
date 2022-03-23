#include<bits/stdc++.h>
using namespace std;
#define epsilon 0.00000000001
void xoa()
{
    system("cls");
}
void dungroixoa()
{
    cout<<endl;
    system("pause");
    xoa();
}
class tamgiac
{
    private:
    double canh0, canh1, canh2;
    public:
    tamgiac(double = 0, double = 0 , double = 0);
    void nhap();
    void xuat( int );
    bool kiemtamgiac();
    int loaitamgiac(); // 1 : tam giác đều, 2 : tam giác cân, 3 : tam giác vuông, 4 : tam giác vuông cân
    double chuvi();
    double dientich();
};
tamgiac :: tamgiac(double a , double b , double c)
: canh0(a), canh1(b), canh2(c)
{}
void tamgiac :: nhap()
{
    do
    {
    cout<<"Hay nhap do dai cac canh tam giac ( do lai phai la so duong )\n";
    cout<<"Do dai canh 1 : ";
    cin>>this->canh0;
    cout<<"Do dai canh 2 : ";
    cin>>this->canh1;
    cout<<"Do dai canh 3 : ";
    cin>>this->canh2;
    } while (canh0 <= 0 || canh1 <=0 || canh2<=0);
}
void tamgiac :: xuat(int n)
{
    cout<<"Tam giac co do dai 3 canh lan luot la : "<<this->canh0<<" , "<<this->canh1<<" , "<<this->canh2<<endl;
    cout<<"Tam giac thuoc loai : ";
    switch (n)
    {
    case 1 : cout<<"Tam giac deu\n"; break;
    case 2 : cout<<"Tam giac can\n"; break;
    case 3 : cout<<"Tam giac vuong\n"; break;
    case 4 : cout<<"Tam giac vuong can\n"; break;
    default: cout<<"Tam giac binh thuong\n"; break;
    }
    cout<<"Chu vi tam giac : "<<fixed<<setprecision(3)<<this->chuvi()<<endl;
    cout<<"Dien tich tam giac : "<<fixed<<setprecision(3)<<this->dientich()<<endl;
    dungroixoa();
}
bool tamgiac :: kiemtamgiac()
{
    if (canh0+canh1<canh2 || canh0+canh2<canh1 || canh1+canh2<canh0 ) return false;
    else return true;
}
double tamgiac :: chuvi()
{
    return canh0+canh1+canh2;
}
double tamgiac :: dientich()
{
    return sqrt(chuvi()/2*(chuvi()/2-canh0)*(chuvi()/2-canh1)*(chuvi()/2-canh2));
}
int tamgiac :: loaitamgiac()
{
    if (canh0 == canh1 == canh2) return 1;
    if (canh0 == canh1 || canh0 == canh2 || canh1 == canh2)
    {
        if (abs(canh0*canh0 + canh1*canh1 - canh2*canh2 ) <= epsilon || abs(-canh0*canh0 + canh1*canh1 + canh2*canh2 ) <= epsilon || abs(canh0*canh0 - canh1*canh1 + canh2*canh2 ) <= epsilon )
        return 4;
        return 2;
    }
    if (abs(canh0*canh0 + canh1*canh1 - canh2*canh2 ) <= epsilon || abs(-canh0*canh0 + canh1*canh1 + canh2*canh2 ) <= epsilon || abs(canh0*canh0 - canh1*canh1 + canh2*canh2 ) <= epsilon)
    return 3;
    
}
int main()
{
    xoa();
    srand(time(NULL));
    while (1)
    {
        cout<<"Hay chon kieu khoi tao gia tri\n";
        cout<<"1. Gia tri ngau nhien\n";
        cout<<"2. Gia tri nhap tu ban phim\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Yeu cau cua ban la : ";
        int lc; cin>>lc;
        xoa();
        if (lc == 1)
        {
            cout<<"Hay nhap so luong tam giac : ";
            int n; cin>>n;
            for (int i = 0 ;i < n ; i++)
            {
                tamgiac a(0 + rand() % (100 - 0 + 1), 0 + rand() % (100 - 0 + 1), 0 + rand() % (100 - 0 + 1));
                cout<<"Tam giac thu "<<i+1;
                if (a.kiemtamgiac())
                {
                a.xuat(a.loaitamgiac());
                }
                else 
                {
                    cout<<"Do dai 3 canh khong thoa man la 1 tam giac!\n";
                    dungroixoa();
                }
            }
        }
        else if (lc == 2)
        {
            cout<<"Hay nhap so luong tam giac : ";
            int n ; cin>>n;
            tamgiac a[n];
            for (int i=0; i<n ; i++)
            {
                a[i].nhap();
                xoa();
                cout<<"Tam giac thu "<<i+1;
                a[i].xuat(a[i].loaitamgiac()); 
                if (a[i].kiemtamgiac())
                {
                a[i].xuat(a[i].loaitamgiac());
                }
                else 
                {
                    cout<<"Do dai 3 canh khong thoa man la 1 tam giac!\n";
                    break;
                }
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
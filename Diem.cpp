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
    void khoangcachhaidiem();
    void kiemtratrung();
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
void DIEM :: khoangcachhaidiem()
{
    DIEM a;
    a.nhap();
    cout<<"Ban yeu cau tinh khoang cach giua hai diem la : ";
    this->xuat(); a.xuat();
    cout<<"Khoang cach giua 2 diem tren la : "<<fixed<<setprecision(3)<<sqrt(pow(this->x-a.x,2)+pow(this->y-a.y,2));
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
int main()
{
    DIEM a;
    a.nhap();
    a.xuat();
    //a.doidiem();
    //a.khoangcachhaidiem();
    a.kiemtratrung();
    system("pause");
    system("cls");
}
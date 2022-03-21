#include<bits/stdc++.h>
using namespace std;

class hocsinh
{
    private:
    string hoten;
    double van, toan;
    public:
    hocsinh(string = "NULL", double = 0 , double = 0);
    void xuat(int);
    void nhap();
    double diemtb();
    int xeploai();
};
hocsinh :: hocsinh(string a, double b, double c)
: hoten(a), van(b), toan(c)
{}
void hocsinh :: nhap()
{
    cout<<"Ho va ten : ";
    cin.ignore();
    getline(cin, this->hoten);
    cout<<"Diem toan : ";
    cin>>this->toan;
    cout<<"Diem van : ";
    cin>>this->van;
}
void hocsinh :: xuat(int n )
{
    cout<<"\n***********************************\n";
    cout<<"Ho va ten : ";
    cout<<this->hoten;
    cout<<endl;
    cout<<"Diem toan : "<<this->toan;
    cout<<endl;
    cout<<"Diem van : "<<this->van;
    cout<<endl;
    cout<<"Diem trung binh : "<<this->diemtb();
    cout<<endl;
    cout<<"Xep loai : "; 
    if (n==1 ) cout<<"Gioi";
    else if (n==2) cout<<"Kha";
    else if (n==3) cout<<"Trung binh";
    cout<<"\n***********************************\n";
}
double hocsinh :: diemtb()
{
    return (this->toan+this->van)/2;
}
int hocsinh :: xeploai()
{
    double a = diemtb();
    if (a >= 9 ) return 1;
    else if (a >= 5 && a < 9 ) return 2;
    else return 3; 
}
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
int main()
{
    xoa();
    cout<<"Nhap so hoc sinh : ";
    int n; cin>>n;
    hocsinh a[n];
    xoa();    
    for (int i=0 ; i<n;i++)
    {
        a[i].nhap();
        xoa();
    }
    xoa();
    for (int i = 0 ;i < n ; i++)
    {
        a[i].xuat(a[i].xeploai());
    }
    return 0;   
}

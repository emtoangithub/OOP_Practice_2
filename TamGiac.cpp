#include<bits/stdc++.h>
using namespace std;

class tamgiac
{
    private:
    double canh0, canh1, canh2;
    public:
    tamgiac(double = 0, double = 0 , double = 0);
    void nhap();
    void xuat();
    bool kiemtamgiac();
    int loaitamgiac(); // 1 : tam giác đều, 2 : tam giác cân
    double chuvi();
    double dientich();
};
tamgiac :: tamgiac(double a , double b , double c)
: canh0(a), canh1(b), canh2(c)
{}
void tamgiac :: nhap()
{
    cout<<"Do dai canh 1 : ";
    cin>>this->canh0;
    cout<<"Do dai canh 2 : ";
    cin>>this->canh1;
    cout<<"Do dai canh 3 : ";
    cin>>this->canh2;
}
void tamgiac :: xuat()
{
    cout<<"Tam giac co do dai 3 canh lan luot la : "<<this->canh0<<" , "<<this->canh1<<" , "<<this->canh2;
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
                // Để đó sẵn chưa xây dựng phương thức xong
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
                // Chưa xây dựng phương thức xong
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
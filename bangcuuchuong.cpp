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
void doiso(int &a, int &b)
{
    if (a > b) swap(a, b);
}
void maume()
{
    cout<<"\n*********************\n";
}
void cuuchuong(int n)
{
    maume();
    cout<<"Bang cuu chuong "<<n<<endl;
    for (int i = 1 ; i<=10 ; i++)
    {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    maume();
}
class BangCuuChuong
{
    private:
    int m,n;
    public:
    BangCuuChuong(int = 2, int = 2 + rand() % (9 - 2 + 1));
    void nhap();
    void inmn();
    void inhet();
    void inm();
};
BangCuuChuong :: BangCuuChuong(int a, int b)
: m(a), n(b)
{}
void BangCuuChuong :: nhap()
{
    cout<<"m : ";
    cin>>m;
    cout<<"n : ";
    cin>>n;
}
void BangCuuChuong :: inhet()
{
    for (int i = 2; i<=9; i++)
    {
        cuuchuong(i);
    }
}
void BangCuuChuong :: inmn()
{
    for (int i = this->m ; i<= this->n; i++)
    {
        cuuchuong(i);
    }
}
void BangCuuChuong :: inm()
{
    cuuchuong(this->m);
}

int main()
{
    xoamanhinh();
    srand(time(NULL));
    while (1)
    {
        int chay = 1;
        int chay1 = 1;
        cout<<"Hay chon yeu cau\n";
        cout<<"1. Gia tri m, n khoi tao ngau nhien\n";
        cout<<"2. Nhap m, n tu ban phim\n";
        cout<<"0. Thoat chuong trinh\n";
        cout<<"Lua chon cua ban la : ";
        int lc0; cin>>lc0;
        xoamanhinh();
        if (lc0 == 1)
        {
            int a =  2 + rand() % (9 - 2 + 1);
            int b =  2 + rand() % (9 - 2 + 1);
            doiso(a, b);
            BangCuuChuong tmp(a, b);
            if (!chay) break;
            while (1 && chay)
            {
                cout<<"1. In bang cuu chuong m\n";
                cout<<"2. In bang cuu chuong tu m den n\n";
                cout<<"3. In bang cuu chuong tu 2 den 9\n";
                cout<<"0. Thoat chuc nang 1\n";
                cout<<"Yeu cau cua ban la : ";
                int lc1; cin>>lc1;
                xoamanhinh();
                if (lc1 == 1)
                {
                    tmp.inm();
                    dungroixoa();
                }
                else if (lc1 ==2 )
                {
                    tmp.inmn();
                    dungroixoa();
                }
                else if (lc1 == 3)
                {
                    tmp.inhet();
                    dungroixoa();
                }
                else 
                {
                    cout<<"Thoat chuc nang 1!";
                    dungroixoa();
                    chay = 0;
                    break;
                    return 0;
                }
            }
        }
         if (lc0 == 2)
        {
            BangCuuChuong tmp;
            tmp.nhap();
            xoamanhinh();
            if (!chay1) break;
            while (1 && chay1)
            {
                cout<<"1. In bang cuu chuong m\n";
                cout<<"2. In bang cuu chuong tu m den n\n";
                cout<<"3. In bang cuu chuong tu 2 den 9\n";
                cout<<"0. Thoat chuc nang 2\n";
                cout<<"Yeu cau cua ban la : ";
                int lc1; cin>>lc1;
                xoamanhinh();
                if (lc1 == 1)
                {
                    tmp.inm();
                    dungroixoa();
                }
                else if (lc1 ==2 )
                {
                    tmp.inmn();
                    dungroixoa();
                }
                else if (lc1 == 3)
                {
                    tmp.inhet();
                    dungroixoa();
                }
                else 
                {
                    cout<<"Thoat chuc nang 2!";
                    dungroixoa();
                    chay1 = 0;
                    break;
                    return 0;
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
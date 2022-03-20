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
int tamgiac :: loaitamgiac()
{
    double a = canh0, b = canh1, c = canh2;
    if (canh0 = canh1 = canh2) return 1;
    
}
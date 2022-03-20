#include<bits/stdc++.h>
using namespace std;

class hocsinh
{
    private:
    string hoten;
    double van, toan;
    public:
    hocsinh(string = "NULL", double = 0 , double = 0);
    void xuat();
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
void hocsinh :: xuat()
{
    cout<<"\n***********************************\n";
    cout<<"Ho va ten : ";
    cout<<this->hoten;
    cout<<endl;
    cout<<"Diem toan : "<<this->toan;
    cout<<endl;
    cout<<"Diem van : "<<this->van;
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
int main()
{
    
}

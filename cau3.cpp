#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string ma, ten, ns;
    double toan, van, anh;
};
struct node
{
    sinhvien data;
    node* pnext;
};
struct danhsach
{
    node* phead;
    node* ptail;
};
void taodanhsach(danhsach &l)
{
    l.phead=l.ptail=NULL;
}
node* taonode()
{
    node *a = new node;
    cout<<"Ten ( khong qua 100 ky tu ) : ";
    cin.ignore();
    getline(cin, a->data.ten);
    cout<<"ID ( khong qua 100 ky tu ) : ";
    cin.ignore();
    getline(cin, a->data.ma);
    cout<<"Ngay sinh ( dd/mm/yyyy ) : ";
    cin.ignore();
    getline(cin, a->data.ns);
    cout<<"Diem toan ( [0,10] ) : ";
    cin>>a->data.toan;
    cout<<"Diem van ( [0,10] ) : ";
    cin>>a->data.van;
    cout<<"Diem anh ( [0,10] ) : ";
    cin>>a->data.anh;
    a->pnext=NULL;
    return a;
}
void themcuoi(danhsach &l, node* a )
{
    if (l.phead == NULL)
	{
		l.phead = a;
		l.ptail = a;
	}
	else
	{
		l.ptail->pnext = a;
		l.ptail = a;
	}
}
void in(const danhsach &l)
{
    node* a = l.phead;
    while (a!=NULL)
    {
        cout<<"\n*****************************\n";
        cout<<"Ten : ";
        cout<<a->data.ten;
        cout<<"\nID : ";
        cout<<a->data.ma;
        cout<<"\nNgay sinh : ";
        cout<<a->data.ns;
        cout<<"\nDiem toan : ";
        cout<<a->data.toan;
        cout<<"\nDiem van : ";
        cout<<a->data.van;
        cout<<"\nDiem anh : ";
        cout<<a->data.anh;
        cout<<"\n*****************************\n";
        a=a->pnext;
    }
}
void innode(const node *a)
{
    cout<<"\n*****************************\n";
        cout<<"Ten : ";
        cout<<a->data.ten;
        cout<<"\nID : ";
        cout<<a->data.ma;
        cout<<"\nNgay sinh : ";
        cout<<a->data.ns;
        cout<<"\nDiem toan : ";
        cout<<a->data.toan;
        cout<<"\nDiem van : ";
        cout<<a->data.van;
        cout<<"\nDiem anh : ";
        cout<<a->data.anh;
        cout<<"\n*****************************\n";  
}
void duyettim(const danhsach &l)
{
    node* a = l.phead;
    while (a!=NULL)
    {
        if ( a->data.toan + a->data.van + a->data.anh > 15 ) innode(a);
        a=a->pnext;
    }
}
class candidate
{
private:
string ma, ten, ns;
double toan, van, anh;
public:
node* nhap();
candidate(string a = "NULL" , string b = "NULL", string c = "NULL", double = 0, double = 0, double = 0 );
};
candidate :: candidate(string a, string b, string c, double d, double e, double f)  
: toan(d), van(e), anh(f), ten(a), ma(b), ns(c)
{}
node* candidate ::nhap()
{
    node* b= taonode();
    return b;
}
int main()
{
    system("cls");
    danhsach tmp;
    taodanhsach(tmp);
    cout<<"Hay nhap so luong thi sinh : ";
    int n; cin>>n;
    candidate a[n];
    system("cls");
    for (int i =0 ; i<n;i++)
    {
        cout<<"Hay nhap thong tin thi sinh\n";
        node* p =  a[i].nhap();
        themcuoi(tmp, p);
        system("cls");
    }
    cout<<"\nDanh sach thi sinh co tong diem tren 15\n";
    duyettim(tmp);
    system("pause");
    system("cls");
    return 0;
}

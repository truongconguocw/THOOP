#include <iostream>
#include <math.h>
using namespace std;
class PhanSo
{
    private:
        int tu, mau;
    public:
        PhanSo(int tu = 0, int mau = 1)
        {
            this->tu = tu;
            this->mau = mau;
        }
        void Nhap()
        {
            cout << "Nhap tu: ";
            cin >> tu;
            cout << "Nhap mau: ";
            cin >> mau;
        }
        void rutgon()
        {
            int a = tu, b = mau;
            while (a != b)
            {
                if (a > b)
                {
                    a -= b;
                }
                else
                {
                    b -= a;
                }
            }
            tu /= a;
            mau /= a;
        }
        void Xuat()
        {
            cout << tu << "/" << mau << endl;
        }
        void Tong(PhanSo a, PhanSo b)
        {
            tu = a.tu * b.mau + b.tu * a.mau;
            mau = a.mau * b.mau;
            rutgon();
        }
        void Tich(PhanSo a, PhanSo b)
        {
            tu = a.tu * b.tu;
            mau = a.mau * b.mau;
            rutgon();
        }
        
        

};
void Nhapdanhsach(PhanSo a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan so thu " << i + 1 << endl;
        a[i].Nhap();
    }
}
int main()
{
    PhanSo a[100];
    int n;
    cout << "Nhap so luong phan so: ";
    cin >> n;
    Nhapdanhsach(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].Xuat();
    }
    PhanSo tong;
    tong.Tong(a[0], a[1]);
    tong.Xuat();
    PhanSo tich;
    tich.Tich(a[0], a[1]);
    tich.Xuat();
    
    
    return 0;
}
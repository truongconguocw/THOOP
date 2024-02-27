#include <iostream>
using namespace std;
class Phanso
{
    public:
        int tu, mau;
    public:
        Phanso(int tu = 0, int mau = 0)
        {
            this->tu = tu;
            this->mau = mau;
        }
        ~Phanso()
        {
        }
        void nhap()
        {
            cout << "Nhap tu so: ";
            cin >> tu;
            cout << "Nhap mau so: ";
            cin >> mau;
        }
        void rutgon()
        {
            int a = tu, b = mau;
            while (a != b)
            {
                if (a > b)
                    a -= b;
// -= toán tử trừ và gán
                else
                    b -= a;
            }
            tu /= a;
            mau /= a;
        }


};
void xuat(Phanso &a)
{
    cout << a.tu << "/" << a.mau << endl;
}
void tong(Phanso &a, Phanso &b)
{
    Phanso c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    c.rutgon();
    xuat(c);
}
void hieu(Phanso &a, Phanso &b)
{
    Phanso c;
    c.tu = a.tu * b.mau - b.tu * a.mau;
    c.mau = a.mau * b.mau;
    c.rutgon();
    xuat(c);
}
int main()
{
    Phanso a, b;
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Nhap phan so thu nhat: " << endl;
    a.nhap();
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Nhap phan so thu hai: " << endl;
    b.nhap();
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Tong 2 phan so: ";
    tong(a, b);
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Hieu 2 phan so: ";
    hieu(a, b);
    return 0;
}
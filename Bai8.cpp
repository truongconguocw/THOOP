#include <iostream>
#include <string.h>
using namespace std;
class KhachHang
{
    private:
        char hoten[30];
        char ngaysinh[30];
        char soCMND[10];
        char hokhau[50];
    public:
        KhachHang(char hoten[30] = "", char ngaysinh[30] = "", char soCMND[10] = "", char hokhau[50] = "")
        {
            strcpy(this->hoten, hoten);
            strcpy(this->ngaysinh, ngaysinh);
            strcpy(this->soCMND, soCMND);
            strcpy(this->hokhau, hokhau);
        }
        ~KhachHang()
        {
        }
        void nhap()
        {
            cout << "Nhap ho ten: ";
            cin.getline(hoten, 30);
            cout << "Nhap ngay sinh: ";
            cin.getline(ngaysinh, 30);
            cout << "Nhap so CMND: ";
            cin.getline(soCMND, 10);
            cout << "Nhap ho khau: ";
            cin.ignore(1, '\n');
            cin.getline(hokhau, 50);
        }
        void xuat()
        {
            cout << "Ho ten: " << hoten << endl;
            cout << "Ngay sinh: " << ngaysinh << endl;
            cout << "So CMND: " << soCMND << endl;
            cout << "Ho khau: " << hokhau << endl;
        }
};
int main()
{
    KhachHang a;
    cout << "========================\n";
    cout << "Nhap thong tin khach hang: " << endl;
    a.nhap();
    cout << "========================\n";
    cout << "Thong tin khach hang: " << endl;
    a.xuat();
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
class giaovien
{
    private:
        char hoten[30];
        int tuoi;
        char bangcap[30];
        char chuyennghanh[20];
        float bacluong;
    public:
        giaovien(char hoten[30] = "", int tuoi = 0, char bangcap[30] = "", char chuyennghanh[20] = "", float bacluong = 0)
        {
            strcpy(this->hoten, hoten);
            this->tuoi = tuoi;
            strcpy(this->bangcap, bangcap);
            strcpy(this->chuyennghanh, chuyennghanh);
            this->bacluong = bacluong;
        }
        ~giaovien()
        {
        }
        void nhap()
        {
            cout << "Nhap ho ten: ";
            cin.getline(hoten, 30);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
            cout << "Nhap bang cap: ";
            cin.ignore(1, '\n');
            cin.getline(bangcap, 30);
            cout << "Nhap chuyen nghanh: ";
            cin.getline(chuyennghanh, 20);
            cout << "Nhap bac luong: ";
            cin >> bacluong;
        }
        void xuat()
        {
            cout << "Ho ten: " << hoten << endl;
            cout << "Tuoi: " << tuoi << endl;
            cout << "Bang cap: " << bangcap << endl;
            cout << "Chuyen nghanh: " << chuyennghanh << endl;
            cout << "Bac luong: " << bacluong << endl;
        }
        void tinhtienluong()
        {
            float tienluong;
            tienluong = bacluong * 1490;
            cout << "Tien luong: " << tienluong << endl;
        }
};
int main()
{
    giaovien a;
    cout << "========================\n";
    cout << "Nhap thong tin giao vien: " << endl;
    a.nhap();
    cout << "========================\n";
    cout << "Thong tin giao vien: " << endl;
    a.xuat();
    cout << "========================\n";
    cout << "Tien luong cua giao vien: " << endl;
    a.tinhtienluong();
    return 0;
};
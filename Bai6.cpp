#include <iostream>
#include <string.h>
using namespace std;
class CongNhan
{
    private:
        char hoten[30];
        int tuoi;
        char quequan[30];
        float bacluong;
    public:
        CongNhan(char hoten[30] = "", int tuoi = 0, char quequan[30] = "", float bacluong = 0){
            strcpy(this -> hoten, hoten);
            this -> tuoi = tuoi;
            strcpy(this -> quequan, quequan);
            this -> bacluong = bacluong;
        }
        void nhap(){
            cout << "Nhap ho ten: ";
            cin.getline(hoten, 30);
            cout << "Nhap tuoi: ";
            cin >> tuoi;
            cin.ignore();
            cout << "Nhap que quan: ";
            cin.getline(quequan, 30);
            cout << "Nhap bac luong: ";
            cin >> bacluong;
        }
        void xuat(){
            cout << "Ho ten: " << hoten << endl;
            cout << "Tuoi: " << tuoi << endl;
            cout << "Que quan: " << quequan << endl;
            cout << "Bac luong: " << bacluong << endl;
        }
        float tinhluong(){
            return bacluong * 2500;
        }
        float tinhphucap(){
            return tinhluong() * 0.2;
        }
};
int main()
{
    CongNhan cn;
    cout << "========================\n";
    cout << "Nhap thong tin cong nhan: " << endl;
    cn.nhap();
    cout << "========================\n";
    cout << "Thong tin cong nhan: " << endl;
    cn.xuat();
    cout << "Luong cua cong nhan: " << cn.tinhluong() + cn.tinhphucap() << endl;
    return 0;
}
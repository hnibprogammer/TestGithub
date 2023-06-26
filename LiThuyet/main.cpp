#include <bits/stdc++.h>
using namespace std; 
//https://www.youtube.com/watch?v=L-BabT96Zmk&list=PLux-_phi0Rz0Hq9fDP4TlOulBl8APKp79&index=51
//class: Lop 
//Thuoc tinh: attribute 
//Phuong thuc: method, behavior 
//object: Doi tuong 
//constructor: hàm khởi tạo (cùng tên class, không có kiểu trả về)
//destructor: Hàm hủy 
//static variable: Biến xài chung(Tĩnh = dừng chân, luôn vậy)


//-Encapsulation: Dong goi 
//-Access modifier: Phạm vi thuộc tính 
// - private (Thường để cho các attribute)
// - public (Thường để cho method, behavior)
// - protected

// class TenClass{
//   //Thuộc tính và phương thức
// };

// Example: 
  class SinhVien{
      private: 
        string id, ten, tuoi, ns; 
        double gpa;
      public:
        SinhVien(); //constructor
        SinhVien(string, string, string, double); //constructor
        void xinchao();
        void dihoc();
        ~SinhVien(); // Hàm hủy
  };

// Implementation 
// :: - toán tử phạm vi

//Có thể nạp chồng các constructor khác nhau
SinhVien::SinhVien(string ma, string name, string birth, double diem){
  cout << "Ham khoi tao co tham so duoc goi!\n";
  id = ma; 
  ten = name;
  ns = birth; 
  gpa = diem; 
}

SinhVien::SinhVien(){
  cout<<"Ham khoi tao duoc goi!\n";
}

void SinhVien::xinchao(){
  cout<<"Xin chao\n";
}

void SinhVien::dihoc(){
  cout<<"Di hoc\n";
}

int main(){
  SinhVien x("123", "Nguyen Van A", "23/12/2003", 3.14); 
  x.dihoc();
  x.xinchao();
  // cout<<x.id<<endl; //Không truy cập được vì id thuộc phạm vi private trong class


  return 0;
}
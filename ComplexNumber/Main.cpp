#include <bits/stdc++.h>

using namespace std;

// Class Số phức bao gồm các toán tử: + - * / giữa các số 

//Nhập, xuất ? 
//Getter, setter ? 


class SoPhuc{
  private: 
    double thuc, ao; 
  public: 
    //Constructor khởi động
    SoPhuc(int thuc, int ao){
      this -> thuc = thuc; 
      this -> ao = ao;
    }
    SoPhuc(){
      this -> thuc = 0;
      this -> ao = 0;
    };
    //Getter và setter
    int getThuc();
    int getAo();
    void setThuc(int thuc);
    void setAo(int ao);
    //Nhập xuất
    //(Kiểu dữ liệu + operator + syntax + (Danh sách tham số))
    friend istream& operator >> (istream& in, SoPhuc &a); 
    friend ostream& operator << (ostream& out, SoPhuc b);
    //Overloading plus operator, minus operator
    friend SoPhuc operator + (SoPhuc a, SoPhuc b); 
    friend SoPhuc operator - (SoPhuc a, SoPhuc b);
    //Overloading multiplicative operator, divisitive operator 
    friend SoPhuc operator * (SoPhuc a, SoPhuc b);
    friend SoPhuc operator / (SoPhuc a, SoPhuc b);
};

istream& operator >> (istream& in, SoPhuc &a){
  cout<<"Nhap: ";
  in >> a.thuc >> a.ao; 
  return in;
}

ostream& operator << (ostream& out, SoPhuc a){
  out << a.thuc << " + " <<"("<< a.ao <<")i"; 
  return out;
}

SoPhuc operator + (SoPhuc a, SoPhuc b){
  SoPhuc Tong;
  Tong.thuc = a.thuc + b.thuc;
  Tong.ao = a.ao + b.ao;
  return Tong;
}

SoPhuc operator - (SoPhuc a, SoPhuc b){
  SoPhuc Hieu;
  Hieu.thuc = a.thuc - b.thuc;
  Hieu.ao = a.ao - b.ao;
  return Hieu;
}

SoPhuc operator * (SoPhuc a, SoPhuc b){
  SoPhuc multiplication; 
  multiplication.thuc = a.thuc*b.thuc - a.ao*b.ao;
  multiplication.ao = a.thuc*b.ao + a.ao*b.thuc;
  return multiplication;
}

SoPhuc operator / (SoPhuc a, SoPhuc b){
  SoPhuc division; 
  division.thuc = (a.thuc*b.thuc + a.ao*b.ao)/(b.thuc*b.thuc + b.ao*b.ao);
  division.ao = (a.ao*b.thuc - a.thuc*b.ao)/(b.thuc*b.thuc + b.ao*b.ao);
  return division;
}

int main()
{
  SoPhuc a(1,5), b(3,6);
  cout<<fixed<<setprecision<<a/b;
  return 0; 
}
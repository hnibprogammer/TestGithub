#include <bits/stdc++.h> 
using namespace std; 

class SinhVien{
  private: 
    string id, ten, ns; 
    double gpa; 
  public: 
    // SinhVien();
    string getId();
    string getTen();
    string getNs();
    double getGpa();
    friend istream& operator >> (istream &, SinhVien& a);
    friend ostream& operator << (ostream &, SinhVien a);
    bool operator < (SinhVien a); //Nạp chồng toán tử < cho việc so sánh với một đối tượng thuộc class SinhVien khác;
};

string SinhVien::getTen(){
  return this->ten;
}

bool SinhVien::operator < (SinhVien a){
  return this->gpa < a.gpa;
}
istream& operator >> (istream &nhap, SinhVien& a){
  cout<<"Nhap ID: "; 
  getline(nhap, a.id);
  cout<<"Nhap ten: "; 
  getline(nhap, a.ten);
  cout<<"Nhap ngay sinh: "; nhap >> a.ns; 
  cout<<"Nhap GPA: "; nhap >> a.gpa;
  nhap.ignore();
  return nhap; 
}

ostream& operator << (ostream &out, SinhVien a){
  cout<< a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
  return out;
}

int main(){
  int n; cin>>n; cin.ignore();
  SinhVien a[n]; 
  for(int i = 0 ; i < n ; i++)
  {
    cin>>a[i];
  }
  sort(a,a+n); // Hàm sort từ bé đi lên 
  for(int i = 0 ; i < n ; i ++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
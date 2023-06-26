#include <iostream> 

using namespace std; 

using ll = long long;

/// @brief Hàm tìm ước chung lớn nhất của hai tham số a và b
/// @param a 
/// @param b 
/// @return (a,b) = (b,a&b)
ll gcd(ll a, ll b){
  if(b==0) return a; 
  return gcd(b, a%b);
}

/// @brief Class PhanSo 
class PhanSo{
    private: 
      ll tu, mau; 
    public: 
      PhanSo(ll tu, ll mau);
      friend ostream& operator << (ostream&, PhanSo); //forward declaration
      friend istream& operator >> (istream&, PhanSo&);
      void rutgon(); 
};

PhanSo::PhanSo(ll tu, ll mau){
  this->tu=tu; 
  this->mau = mau;
}


/// @brief Nạp chồng toán tử xuất 
/// @param out Toán tử xuất
/// @param a Đối tượng
/// @return Toán tử xuất
ostream& operator << (ostream& out, PhanSo a){
  out<<a.tu<<"/"<<a.mau<<endl;
  return out;
}

/// @brief Nạp chồng toán tử nhập
/// @param in Toán tử nhập 
/// @param a Tham số đối tượng thuộc class PhanSo
/// @return Toán tử nhập
istream& operator >> (istream& in, PhanSo &a){
  in>> a.tu >> a.mau; 
  return in;
}

/// @brief Hàm rút gọn phân số tối giản
void PhanSo::rutgon(){
  ll g = gcd(tu, mau);
  tu /= g; 
  mau /= g;
}

int main(){
  PhanSo p(1,1); 
  cin >> p; 
  p.rutgon(); 
  cout<<p; 
  return 0;
}
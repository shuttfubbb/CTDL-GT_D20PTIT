/**************************************
	Name:   
	Copyright: (C) 2021
	Author: DevCP Fan
	Date: 1/11/21 19:36
	Description: Ghi chep
  Ki nghe phong sach Empty, 1/1
  View 5E -> Rules
  Palindrome Doi xung
  so int xuoi = nguoc ganh
  121 22  4884 48084 
  1234
  1. Hien thi cac so pal 1..1M
     K: 5E it nhat 5 vi du five Examples Rules 	 
SV kem test: Test all
Linh hoat
I3 = Improve, Improve, and Improve again 
Lap trinh de nghien cuu

****************************************/

#include <bits/stdc++.h> 

using namespace std; // su dung vung lam viec chuan

const string NUMDIGIT = "0123456789";
const string ALPHADIGIT = "abcdefghijklmnopqrstuvwxyz";
const string DIGIT = NUMDIGIT + ALPHADIGIT;

// Inv(1234) = 4321
// View Khung nhin
// [1] ->   [4][3] [2][1] 
// ley phai -> ghep phai
// x % 10   -> y*10 + don 
// bo chu so hang don: x/10
// K: sua it loi nhieu
int Inv(int x, int base = 10) {
  int y = 0;
  while(x != 0) {
     y = y*base + (x % base);
     x /= base;
  }
  return y;
}


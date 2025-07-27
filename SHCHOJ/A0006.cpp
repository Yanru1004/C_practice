#include <iostream>

using namespace std;

int main(){

  int score;
  cin >> score;
  
  if (score >= 90 && score <= 100){
  	cout << "優";}
  else if (score >= 80){
    cout << "甲";}
  else if (score >= 70){
  	cout << "乙";}
  else if (score >= 60){
  	cout << "丙";}
  else if (score >= 0){
  	cout << "丁";}
  else{
  	cout << "錯誤";}
  
}
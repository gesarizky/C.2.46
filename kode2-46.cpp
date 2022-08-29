/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[30] ;
  char key[] = "AaEeIiOoUu";
  char *pch;
  int counter = 0;
  cout<<"Masukkan suatu kalimat: ";
  cin.getline(str, sizeof(str) - 1);
  
  cout<<"Huruf vokal dalam kalimat: ";
  
  pch = strpbrk(str, key);
  while (pch != NULL) {
    cout<<*pch<<" ";
    pch = strpbrk(pch+1, key);
    counter++;
  }
  cout<<endl;
  
  cout<<"Jumlah huruf vokal: "<<counter;

  return 0;
}

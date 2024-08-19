#include <iostream>
using namespace std;

int main()
{
  string b = "hui";
  string a;
  while(true){
   cout<< " Write something that only i know"<< endl;
   cin>> a ;
   if(a==b){
      break; 
   }
  }
   
}
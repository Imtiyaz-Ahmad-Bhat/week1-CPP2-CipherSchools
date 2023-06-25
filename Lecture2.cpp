#include<bits/stdc++.h>
using namespace std;
//int sum(int a,int b){
    //return a+b;
//}
//int maxi(int n1,int n2){
   // if(n1>n2){
        //return n1;
    //}
   // else{
     //   return n2;
    //}

//}//
//int maxi3(int n1,int n2,int n3){
   // if(n1>n2 && n1>n3){
       // return n1;
   // }
    //if(n2>n1 && n2>n3)
   // {
     // return n2;
//}
   // else
       // if(n3>n1 && n3>n2)
   // {
     //return n3;
    //}//
//}//
//int maxi(int n1,int n2,int n3,int n4)
//{
//int  a=maxi(n1,n2);
//int  b=maxi(n3,n4);
//return a;
 //return b;
//int  a1 = maxi(n1,n2,n3);
// return maxi(a1,n4);
//}
//void increment(int a)
//{
 //pass by value
 //a++;
// return ;
//}
//void increment(int *a)
//{
 //(*a)++;
//}
//void increment(int &a)
//{
 //(a)++;

//}
int main(){
    //cout<<sum(1,2);
    //cout<<maxi(1,2);
    //cout<<(maxi3(1,2,3);
    //cout<<maxi(1,2,3,4)
    int i=11;
    //increment(i);
    //increment(&i);
    int &j=i;
    j++;
    cout<<i<<" \n ";
   cout<<j;
}


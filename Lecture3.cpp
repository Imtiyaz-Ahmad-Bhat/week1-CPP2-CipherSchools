#include<bits/stdc++.h>
using namespace std;
//iterative form
//int power(int base,int pow){
//int num=1;
//for(int i=0;i<pow;i++)
//{
//num * = base;    //num = num * base;//
//}
//return num;
//}
//recursive approach//
int power(int base,int pow)
//base case
//assumption
//calculation
{
 if(pow==0)
return 1;
int smlAns = power(base,pow-1)//smlAns->2^2//
return smlAns * base;    //

}
int main()
{
cout<<power(2,3);
return 0;
}

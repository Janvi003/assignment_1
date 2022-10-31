#include<iostream>
using namespace std ;

//tc --o(n) in best case 
//in worst case scenario --o(n^2)



int main()
{   int a[] ={5,1,4,2,8} ;
    for(int i= 0 ; i< 4; i++)
    {
       bool result = 0 ;
       for(int j=0 ;j<4-i ;j++)
       {
        if(a[j]>a[j+1])
        {
            swap(a[j] ,a[j+1]) ;
            result = 1;
        }
       }
       if(result == 0){
          break ;
       }
    }
    for(int i=0 ;i<5 ; i++)
    {
        cout<<a[i]<<"  " ;
    }
    return 0;
}
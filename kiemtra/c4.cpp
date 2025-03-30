#include<iostream>
using namespace std ;
int binarysearch(int a[],int l,int r,int x)
 {
    if (l>r) return -1 ;
    int m =(l+r)/2;
    if (a[m]==x)
        return m;
    if (a[m]>x)
     return binarysearch(a,l,m-1,x);
    else
        return binarysearch(a,m+1,r,x);
}

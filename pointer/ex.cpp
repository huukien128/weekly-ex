#include<iostream>
#include<cstring>
using namespace std ;
void reverse(char a[])
{
    char *ptr=a;
    int size=0;
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }
    for(int i=0 ; i<size/2 ; i++)
    {
        char tmp=*(a+i);
        *(a+i)=*(a+size-1-i);
        *(a+size-1-i)=tmp;
    }
}
void delete_char(char a[], char c)
{
    char *str=a;
    int size=0;
    while(*str!='\0')
    {
     size++;
     str++;
    }
    for(int i=0 ; i<size; i++)
    {
        if(*(a+i)==c)
      {
          for(int j=i; j<size-1;j++)
          {
              *(a+j)=*(a+j+1);
          }
          size--;
          i--;
      }
    }
    *(a+size)='\0';
}
void pad_right(char a[], int n)
{
    char *str=a;
    int size=0;
    while(*str!='\0')
    {
        size++;
        str++;
    }
   if(n>size)
    {
        for(int i=size; i<n; i++)
        {
            *(a+i)=' ';
        }
       *(a+n)='\0';
    }
}
void pad_left(char a[], int n)
{
    char *str=a;
    int size=0;
    while(*str!='\0')
    {
        size++;
        str++;
    }

   if(n>size)
    {
        int h=size;
        for(int j=0 ; j<n-h; j++)
        {

        for(int i=size ; i>=0;i--)
        {
        *(a+i+1)=*(a+i);

        }
        size++;
         *(a+0)=' ';
        }
    }

}
void truncate(char a[], int n)
{
     char *str=a;
    int size=0;
    while(*str!='\0')
    {
        size++;
        str++;
    }
    if(size>n)
       *(a+n)='\0';
}
bool is_palindrome(char a[])
{
     char *ptr=a;
    int size=0;
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }
    for(int i=0 ; i<size/2 ; i++)
    {
       if(*(a+i)!=*(a-size-i-1))
        return false;
    }
    return true;
}
void trim_left(char a[])
{
       char *ptr=a;
    int size=0;
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }
    for(int i=0 ; i<size; i++)
    {
        if(*(a+0)==' ')
        {
          for(int j=0 ; j<size-1 ; j++)
          {
              *(a+j)=*(a+j+1);
          }
          size--;
          i--;
        }
        else
            break;
    }
    *(a+size)='\0';
}
void trim_right(char a[])
{

    char *ptr=a;
    int size=0;
    while(*ptr!='\0')
    {
        size++;
        ptr++;
    }

    while(size>0&&*(a+size-1)==' ')
    {
        size--;
    }
    *(a+size)='\0';
}
int main()
{
   char s[]="olleh";
   reverse(s);
   cout << s <<endl;
   char a[]="khihehn";
   delete_char(a,'h');
   cout <<a<<endl; ;
   char k[]="kien";
   pad_right(k,10);
   cout << k <<endl;
   char h[]="kien";
   pad_left(h,10);
   cout << h<<endl ;
   char m[]="kienhj";
   truncate(m,4);
   cout << m << endl;
   cout <<is_palindrome(m)<<endl;
   char z[] ="      kien";
   trim_left(z);
   cout <<z << endl;
   char l[]="kienn   ";
    trim_right(l);
    cout << l<<endl;




}

#include "bits/stdc++.h"
using namespace std;
char temp[1<<10],ch;
#define blank putc_unlocked('\n',stdout);

int getInt()  
{
    ch=getc_unlocked(stdin);
    //cout<<" in the beginning with ch as "<<ch;
    while(ch<'-'){/*cout<<" in while 1 with ch as "<<ch;*/ ch=getc_unlocked(stdin);}
    int sign=1,n1=0;
    if(ch=='-') sign=-1,ch=getc_unlocked(stdin);
    while(ch>'-' )
    {
        //cout<<" in while 2 with ch as "<<ch;
        n1=n1*10 +ch-'0';
        ch=getc_unlocked(stdin);
    }
    return n1*sign;
}

void printn(int n)
{
    char *ptr=temp+30;
    *ptr--='\0';
    int flag=1;
    if(n)
    {
        if(n<0) n*=-1,flag=-1;
            
        while(n>0)
        {
            *ptr--=(n%10) +'0';
            n/=10;
        }
        if(flag==-1) *ptr--='-';
        
    }
    else {*ptr='0';putc_unlocked('0',stdout);return;}
    ptr++;
    while(*ptr!='\0')
    {
        putc_unlocked(*ptr++,stdout);
    }
}
int intersections[10001],path1[10001],path2[10002],len1,len2,leni;
void findIntersections()
{
    while()
}
int main()
{
    int n1,n2,i,j;
    n1=getInt();
    unordered_map<int,int> m1;
    while(n1!=0)
    {
        len1=n1;
        m1.clear()
        for(i=0;i<n1;i++)
        {
            path1[i]=getInt();
        }   
        n2=getInt();
        len2=n2;
        for(i=0;i<n2;i++)
        {
            path2[i]=getInt();
        }
        findIntersections();
        
    }
}

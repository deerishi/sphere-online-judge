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

class Cows
{
	public:
	vector<int> stalls;
	int n,c;
	int find dist();
};
int Cows:: dist()
{
	int res,count1=0;
	while(count1<c)
	{
		count1=0;
		f
int main()
{
	Cows ob1;
	int t,i,temp,count1;
	vector<int>:: iterator it,prev;
	t=getInt();
	while(t--)
	{
		ob1.n=getInt();
		ob1.c=getInt();
		count1=0;
		ob1.stalls.clear();
		for(i=0;i<n;i++)
		{
			ob1.stalls.push_back(getInt());	
		}
		sort(ob1.stalls.begin(),ob1.stalls.end());
		it=ob1.stalls.begin();
		if(ob1.c==2)
		{
			printn(*(it+ob1.n-1)-*it);
			blank;
		}
		else 
		{
			temp=int(float(ob1.n)/ob1.c +0.5);
			diff=0;
			while(flag!=1)
			{
				prev=ob1.stalls.begin();
				for(it=ob1.stalls.begin()+temp;it!=ob1.stalls.end();it=it+temp+diff)
				{
					dist=*it - *prev;
					prev=it;
					count1++;
					if(prev!=ob1.stalls.begin())
					{
						if(dist<mini) mini=dist;
					}
					else mini=dist;
				
					if(count1==ob1.c)
					{
						printn(mini);blank;flag=1;
						break;
					}
				}
				temp=temp/2 + t
				
			}
			
		

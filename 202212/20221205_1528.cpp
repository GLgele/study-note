#include<bits/stdc++.h>
using namespace std;
void addZeroBefore(string &src,int times)
{
	string temp;
	for(int i=0; i<times; i++)	temp=temp+"0";
	src=temp+src;
}
string add(string a,string b)
{
	int la = a.size();
	int lb = b.size();
	int lmax/*,lmin*/;
	if(la>lb)
	{
		lmax=la;/*lmin=lb;*/addZeroBefore(b,la-lb);
	}
	else if(lb>la)
	{
		lmax=lb;/*lmin=la;*/addZeroBefore(a,lb-la);
	}
	else	lmax=la;
	string retval = "";
	int carry = 0;
	for(int i=0; i<lmax; i++)
	{
		int temp = (int(a[i])-'0')+(int(b[i])-'0');
		temp+=carry;
		carry = temp/10;
		temp%=10;
		retval = retval+to_string(temp);
	}
	//reverse(retval.begin(),retval.end());
	return retval;
}
string sub(string a,string b)
{
	int la = a.size();
	int lb = b.size();
	int lmax;
	if(la>lb)
	{
		lmax=la;
		addZeroBefore(b,la-lb);
	}
	else if(lb>la)
	{
		lmax=lb;
		addZeroBefore(a,lb-la);
	}
	else lmax = la;
	string retval = "";
	int carry = 0;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	if(a>b)
	{
		for(int i=0; i<lmax; i++)
		{
			int temp = (int(a[i])-'0') - (int(b[i])-'0');
			//cout<<int(a[i])-'0'<<" "<<int(b[i])-'0'<<" "<<a[i]<<" "<<b[i]<<endl;
			temp-=carry;
			if(temp<0)
			{
				carry=-1;
				temp=10-temp*-1;
			}
			else	carry=0;
			retval = retval+to_string(temp);
		}
	}

	//reverse(retval.begin(),retval.end());
	return retval;
}
string mul(string a,string b)
{

}
string div(string a,string b)
{

}
int main()
{
	string a,b;
	char c;
	cin>>a>>c>>b;
	switch(c)
	{
		case '+':
		{
			cout<<add(a,b)<<endl;
			break;
		}
		case '-':
		{
			cout<<sub(a,b)<<endl;
			break;
		}
	}
	return 0;
}
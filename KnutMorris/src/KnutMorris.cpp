//============================================================================
// Name        : KnutMorris.cpp
// Author      : Lokesh Basu
// Version     :
// Copyright   : IIT Roorkee
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inp;
	string pat;
	cout<<"enter string :";
	cin>>inp;
	cout<<"enter pattern :";
	cin>>pat;
	int m = pat.length();
	int a[m];
	int q=-1;
	a[0]=-1;
	for(int i=1; 	i<m;	i++)
	{
		while(q>=0 && pat[q+1]!=pat[i])
		q=a[q];
		if(pat[q+1]==pat[i])
		q++;
		a[i]=q;
	}
	q=-1;
	int n = inp.length();
	for(int j=0;	j<n;		j++)
	{
		while(q>=0 && pat[q+1]!=inp[j])
		q=a[q];
		if(pat[q+1]==inp[j])
		q++;
		if(q==m-1)
		{
			cout<<"pattern occurs at index: "<<j-m+1<<endl;
			q=a[q];
		}
	}
	return 0;
}

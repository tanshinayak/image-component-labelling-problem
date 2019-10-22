#include<iostream>
#include<conio.h>
using namespace std;
int count=2;
void image(int[][10],int);
void left(int[][10],int,int);
void above(int[][10],int,int);
void right(int[][10],int,int);
void below(int[][10],int,int);
void display(int[][10],int);
int main()
{
	int s;
	cout<<"Enter the number of size of the matrix"<<endl;
	cin>>s;
	int ar[10][10];
	cout<<"Enter the image component in form of 1 or 0"<<endl;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cin>>ar[i][j];
		}
	}
	image(ar,s);
	display(ar,s);
	getch();
	return 0;
}
void image(int a[][10],int l)
{
	for(int i=0;i<l;i++)
	{
	   for(int j=0;j<l;j++)
	   	{if(a[i][j]==1)
	    {
			a[i][j]=count;
			left(a,i,j);
			above(a,i,j);
			right(a,i,j);
			below(a,i,j);
			count++;
	  }  }
}}
void left(int a[][10],int i,int j)
{
	if(a[i][j-1]==1)
	    {
			a[i][j-1]=count;
			left(a,i,j-1);
			above(a,i,j-1);
			right(a,i,j-1);
			below(a,i,j-1);
	    }
}
void right(int a[][10],int i,int j)
{
	if(a[i][j+1]==1)
	    {
			a[i][j+1]=count;
			left(a,i,j+1);
			above(a,i,j+1);
			right(a,i,j+1);
			below(a,i,j+1);
	    }
}
void above(int a[][10],int i,int j)
{
	if(a[i-1][j]==1)
	    {
			a[i-1][j-1]=count;
			left(a,i-1,j);
			above(a,i-1,j);
			right(a,i-1,j);
			below(a,i-1,j);
	    }
}
void below(int a[][10],int i,int j)
{
	if(a[i+1][j]==1)
	    {
			a[i+1][j]=count;
			left(a,i+1,j);
			above(a,i+1,j);
			right(a,i+1,j);
			below(a,i+1,j);
	    }
}
void display(int a[][10],int l)
{
	for(int i=0;i<l;i++)
	{
	   for(int j=0;j<l;j++)
	   	{cout<<a[i][j]<<" ";}
	   	cout<<endl;}
	   }

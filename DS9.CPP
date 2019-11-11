#include<iostreame.h>
#include<conio.h>
 void main()
 {
    int a[20],b[20],c[40],n,m,i,j,k;
    clrscr();
    cout<<"Enter of the limit A";
    cin>>n;
    cout<<"Enter the the limit B"<<endl;
    cin>>m;
    cout<<"Enter the element A "<<endl;
    for(i=0;i<n;i++)
	 {
	 cout<<"\n"<<a[i];
	 }
    cout<<"Enter the elements of the B "<<endl;
    for(j=0;j<=m;j++)
	    {
	    cin>>b[i];
	    }
   i=j=0;
   while(i<n &&i<m)
      {
      if(a[i]<b[j])
      c[k++]=a[i++];
      else
      if(a[i]>b[j])
      c[k++]=b[j++];
      else
	{
	c[k++]=b[j++];
	i++;

	}
      }
  if(i<n)
     {
     int t;
	for(t=0;t<n;t++)
	c[k++]=a[i++];
     }
  if(j>m)
    {
    for(int t=0;t<m;t++)
       {
       c[k++]=b[j++];
       }
    }
  cout<<"\n";
  for(k=0;k<(m+n);k++)
  cout<<"\t\t\n"<<c[k];
  getch();
  }
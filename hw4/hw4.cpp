#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
  int a[100];
  int n,i,beg,ed,mid,item;

  cout<<"Enter Number of Elements: ";
  cin>>n;

  cout<<"Enter Elements in Increasing Order: \n";
  for(i=1;i<=n;i++)
  {
    cin>>a[i];
  }

  cout<<"Enter Element to be Found: ";
  cin>>item;

  beg=1;
  ed=n;

  mid=(beg+ed)/2;

  while(beg<=ed && a[mid] !=item)
  {
    if(a[mid]<item)
      beg=mid+1;
    else
      ed=mid-1;

    mid=(beg+ed)/2;
  }

  if(a[mid]==item)
  {
    cout<<"\nElement Found at Space #"<<mid;
  }

  else
    cout<<"\n Element Not Present";



  return 0;

}

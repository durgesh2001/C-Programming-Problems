#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
main()
{     clrscr();
      float a,b,c;
      int i,n;
      cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
      cout<<"                                   !!! CALCULATOR !!!\n                 ";
      cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++";
      for(i=0;i<5;i++)
      {

      cout<<"\nenter no. what you want\n";
      cout<<"1.add\n";
      cout<<"2.subtraction\n";
      cout<<"3.multiply\n";
      cout<<"4.divide\n";
      cout<<"5.squareroot\n";
      cout<<"6.square\n";
      cout<<"7.exit";
      cin>>n;
switch(n)
   {
   case 1:cout<<"\nenter 1st and 2nd no.\n";
	  cin>>a>>b;
	  c=a+b;
	  cout<<"the addition is"<<c;break;
   case 2:cout<<"\nenter 1st and 2nd no.\n";
	  cin>>a>>b;
	  c=a-b;
	  cout<<"\nthe subtraction is "<<c;break;
  case 3: cout<<"\nenter 1st and 2nd no.\n";
	  cin>>a>>b;
	  c=a*b;
	  cout<<"the multiplication is"<<c;break;
  case 4: cout<<"\nenter 1st and 2nd no.\n";
	  cin>>a>>b;
	  c=a/b;
	  cout<<"the quotient is"<<c;break;
  case 5: cout<<"enter  no.\n";
	  cin>>a;
	  c=sqrt(a);
	  cout<<"the root of no. is"<<c;break;
  case 6: cout<<"\nenter no.";
	  cin>>a;
	  c=a*a;
	  cout<<"\nthe square is"<<c; break;
  case 7: exit(0);
  default: cout<<"\n wrong input";break;
  }
  }
  getch();
}


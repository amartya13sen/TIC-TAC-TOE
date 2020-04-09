#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<ctype.h>
void change(int val,int x,int i);
int check();
char box[10]={'1','2','3','4','5','6','7','8','9'};
char ch1[20],ch2[20];
void draw()
{
    cout<<" "<<box[0]<<" | "<<box[1]<<" | "<<box[2]<<endl;
    cout<<"---|---|----"<<endl;
    cout<<" "<<box[3]<<" | "<<box[4]<<" | "<<box[5]<<endl;
    cout<<"---|---|----"<<endl;
    cout<<" "<<box[6]<<" | "<<box[7]<<" | "<<box[8]<<endl;
}
int k=9;
void play()
  {  int val;
      int x=0;
   //char name1[20], name2[20];
   //name1[20]=toupper(ch1[20]);
   //name2[20]=toupper(ch2[20]);

     for(int i=1;i<=k;i++)
     {
	if(i%2!=0)
       {  x=0;
	cout<<endl<<" Chance of "<<ch1<<" : "<<endl<<" Enter a number(1-9) :"<<endl;
	cin>>val;

	change(val,x,i);
       }
       else
       {    x=1;
	cout<<endl<<" Chance of "<<ch2<<" : "<<endl<<" Enter a number(1-9) : "<<endl;
	cin>>val;
	change(val,x,i);
       }

     }
  }

void change(int val,int x,int i)
{     char mark;

    if(x==0)
     {
	  mark='X';
       if(val==1 && box[0]=='1')
	  box[0]=mark;
       else if(val==2 && box[1]=='2')
	  box[1]=mark;
       else if(val==3 && box[2]=='3')
	  box[2]=mark;
       else if(val==4 && box[3]=='4')
	  box[3]=mark;
       else if(val==5 && box[4]=='5')
	  box[4]=mark;
       else if(val==6 && box[5]=='6')
	  box[5]=mark;
       else if(val==7 && box[6]=='7')
	  box[6]=mark;
       else if(val==8 && box[7]=='8')
	  box[7]=mark;
       else if(val==9 && box[8]=='9')
	  box[8]=mark;
     }

   else if(x==1)
     {
	  mark='O';
       if(val==1 && box[0]=='1')
	  box[0]=mark;
       else if(val==2 && box[1]=='2')
	  box[1]=mark;
       else if(val==3 && box[2]=='3')
	  box[2]=mark;
       else if(val==4 && box[3]=='4')
	  box[3]=mark;
       else if(val==5 && box[4]=='5')
	  box[4]=mark;
       else if(val==6 && box[5]=='6')
	  box[5]=mark;
       else if(val==7 && box[6]=='7')
	  box[6]=mark;
       else if(val==8 && box[7]=='8')
	  box[7]=mark;
       else if(val==9 && box[8]=='9')
	  box[8]=mark;
     }
    int m;
    clrscr();
    cout<<endl<<endl<<endl;
    draw();
   m=check();

   if (m==1 && x==0) {  clrscr();
			cout<<endl<<endl;
			draw();
			cout<<endl<<endl<<endl<<ch1<< " wins "<<endl;
			k=0;
		     }
   else if (m==1 && x==1) {     clrscr();
				cout<<endl;
				draw();
				cout<<endl<<endl<<endl<<ch2<<" wins "<<endl;
			    k=0;
			  }
   else if (m==-1 && i==9)
  {
    cout<<endl<<endl<<" Match Draw ";
     k=0;
  }

}

int check()
 {
    if (box[0]==box[1] && box[1]==box[2])
      return 1;
    else if (box[3]==box[4] && box[4]==box[5])
      return 1;
    else if (box[6]==box[7] && box[7]==box[8])
     return 1;
    else if (box[0]==box[3] && box[3]==box[6])
      return 1;
    else if (box[1]==box[4] && box[4]==box[7])
      return 1;
    else if (box[2]==box[5] && box[5]==box[8])
       return 1;
    else if (box[0]==box[4] && box[4]==box[8])
      return 1;
    else if (box[2]==box[4] && box[4]==box[6])
      return 1;
    else
       return -1;
  }


void main()
{ textcolor(YELLOW);
  textbackground(BLUE);
  clrscr();
  cout<<" Developed by Amartya "<<endl;
  cout<<"| TIC    TAC    TOE  | "<<endl<<endl;
  cout<< " RULES :"<<endl<<endl;
  cout<<" 1. Player1 -> X "<<endl<<" 2. Player2 -> O "<<endl<<endl;
  cout<<endl<<endl;
  cout<<" Enter player 1 name : "<<endl;
  gets(ch1);
  cout<<" Enter player 2 name: "<<endl;
  gets(ch2);
  draw();
  cout<<endl<<endl;
  play();
  getch();
}
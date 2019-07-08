#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#define clrscr()
using namespace std;
int main()
{
    clrscr();
    fstream file1;
    unsigned int sum,add,d,i=1,j,e,f,g,h,k,l,w,x,y,z,cd;
    unsigned int bir=20,per=25,der=30,mur=60,par=50,cor=25,twr=30, lur=50,tir=55,rer=10,bc=30;
    unsigned int m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,ab=0;
    char name[50],rank[10],pu,c[20],a[15],b[15],ok;
    clrscr();
	file1.open("proj.txt",ios::out);
    cout<<"\n\n\n\t\t\t     MITE CANTEEN MANAGEMENT";
    cout<<"\n\n\nCONSUMER INFORMATION";
    cout<<"\n\n\n\n NAME:";
    gets(name);
    file1<<name<<" ";
    cout<<"\n SERVICE NO.:";
    cin>>a;
    file1<<a<<" ";
    cout<<"\n SMART CARD NO.:";
	cin>>b;
    file1<<b<<" ";
    cout<<"\n PHONE NO.:";
	cin>>c;
    file1<<c<<" ";
    file1<<i<<" ";
	file1.close();
    again:;
        clrscr();
        cout<<"\n\n\n\n\ 1.MENU & PURCHASE";
        cout<<"\n\n\n\ 2.DETAILS";
        cout<<"\n\n\n\ 3.NEW CUSTOMER";
        cout<<"\n\n\n\ 4.EXIT";
        cout<<"\n\n\nENTER YOUR CHOICE:";
        cin>>d;
        clrscr();
        switch(d)
        {
            case 1:
                    cout<<"\nITEMS\t\t\t\t\t\t\t\t\tRATE(RS)\n";
                    cout<<"\n\nIDLI\t\t\t\t\t\t\t\t\t20";
                    cout<<"\n\nVADA\t\t\t\t\t\t\t\t\t25";
                    cout<<"\n\nMASALA DOSA\t\t\t\t\t\t\t\t30";
                    cout<<"\n\nGOBI MANCHURI\t\t\t\t\t\t\t\t60";
                    cout<<"\n\nSANDWICH\t\t\t\t\t\t\t\t50";
                    cout<<"\n\nPULAV\t\t\t\t\t\t\t\t\t25";
                    cout<<"\n\nPOORI BAAJI\t\t\t\t\t\t\t\t30";
                    cout<<"\n\nFRIED RICE\t\t\t\t\t\t\t\t50";
                    cout<<"\n\nNOODLES\t\t\t\t\t\t\t\t\t55";
                    cout<<"\n\nCHICKEN ROLL\t\t\t\t\t\t\t\t10";
                    cout<<"\n\nCHICKEN BIRIYANI\t\t\t\t\t\t30";
                    start:
                        cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
                        cin>>pu;
                        if(pu=='Y'||pu=='y')
                        {
                            switch(pu)
                            case 1:
                                    clrscr();
                                    cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
                                    idli:;
                                        cout<<"\nIDLI: ";
                                        cin>>m;
                                        if(m>30)
                                        {
                                            cout<<"Enter Quantity Smaller than 30";
                                            getch();
                                            goto idli;
                                        }
                                    vada:;
                                        cout<<"\nVADA: ";
                                        cin>>n;
                                        if(n>20)
                                        {
                                            cout<<"Enter Quantity Smaller than 20";
                                            getch();
                                            goto vada;
                                        }
                                    dosa:;
                                        cout<<"\nMASALA DOSA: ";
                                        cin>>o;
                                        if(o>25)
                                        {
                                            cout<<"Enter Quantity Smaller then 25";
                                            getch();
                                            goto dosa;
                                        }
                                    mun:;
                                        cout<<"\nGOBI MANCHURI: ";
                                        cin>>p;
                                        if(p>50)
                                        {
                                            cout<<"Enter Quantity Smaller then 50";
                                            getch();
                                            goto dosa;
                                        }
                                    sand:;
                                        cout<<"\nSANDWICH: ";
                                        cin>>q;
                                        if(q>30)
                                        {
                                            cout<<"Enter Quantity Smaller then 30";
                                            getch();
                                            goto sand;
                                        }
                                    pula:;
                                        cout<<"\nPULAV: ";
                                        cin>>r;
                                        if(r>40)
                                        {
                                            cout<<"Enter Quantity Smaller then 40";
                                            getch();
                                            goto pula;
                                        }
                                    pori:;
                                        cout<<"\nPOORI BAAJI: ";
                                        cin>>s;
                                        if(s>25)
                                        {
                                            cout<<"Enter Quantity Smaller then 25";
                                            getch();
                                            goto pori;
                                        }
                                    rice:;
                                        cout<<"\nFRIED RICE: ";
                                        cin>>t;
                                        if(t>10)
                                        {
                                            cout<<"Enter Quantity Smaller then 10";
                                            getch();
                                            goto rice;
                                        }
                                    nodl:;
                                        cout<<"\nNOODLES: ";
                                        cin>>u;
                                        if(u>30)
                                        {
                                            cout<<"Enter Quantity Smaller then 30";
                                            getch();
                                            goto nodl;
                                        }
                                    roll:;
                                        cout<<"\nCHICKEN ROLL: ";
                                        cin>>v;
                                        if(v>50)
                                        {
                                            cout<<"Enter Quantity Smaller then 50";
                                            getch();
                                            goto roll;
                                        }
                                    biri:;
                                        cout<<"\nCHICKEN BIRIYANI: ";
                                        cin>>ab;
                                        if(ab>30)
                                        {
                                            cout<<"Enter quantity smaller then 30";
                                            getch();
                                            goto biri;
                                        }
                                    cout<<"\n";
                                    clrscr();
                                    cout<<"\n\n\n\n\n\n\t\t\t\tMITE CANTEEN\n";
                                    cout<<"\n\n\t\t\t\t  CASH MEMO\n";
                                    cout<<"\n\nBILL NO.:"<<++i;
                                    cout<<"\n\nNAME:"<<name;
                                    cout<<"\n\nSERVICE NO.:"<<a;
                                    cout<<"\n\nSMART CARD NO.:"<<b;
                                    cout<<"\n\nPHONE NO.:"<<c;
                                    cout<<"\n\n\n\n\n";
                                    cout<<"===============================================================================";
                                    cout<<"\nITEMS"            <<setw(41)<<"QUANTITY"<<setw(31)<<"PRICE(Rs.)\n";
                                    cout<<"===============================================================================";
                                    if(m>0)
                                        cout<<"\n\nIDLI"        <<setw(38)<<m<<setw(28)<<"Rs."<<m*bir;
                                    if(n>0)
                                        cout<<"\n\nVADA"        <<setw(38)<<n<<setw(28)<<"Rs."<<n*per;
                                    if(o>0)
                                        cout<<"\n\nMASALA DOSA"     <<setw(31)<<o<<setw(28)<<"Rs."<<o*der;
                                    if(p>0)
                                        cout<<"\n\nGOBI MANCHURI"            <<setw(29)<<p<<setw(28)<<"Rs."<<p*mur;
                                    if(q>0)
                                        cout<<"\n\nSANDWICH"<<setw(34)<<q<<setw(28)<<"Rs."<<q*par;
                                    if(r>0)
                                        cout<<"\n\nPULAV" <<setw(37)<<r<<setw(28)<<"Rs."<<r*cor;
                                    if(s>0)
                                        cout<<"\n\nPOORI BAAJI"      <<setw(31)<<s<<setw(28)<<"Rs."<<s*twr;
                                    if(t>0)
                                        cout<<"\n\nFRIED RICE"         <<setw(32)<<t<<setw(28)<<"Rs."<<t*lur;
                                    if(u>0)
                                        cout<<"\n\nNOODLES"             <<setw(35)<<u<<setw(28)<<"Rs."<<u*tir;
                                    if(v>0)
                                        cout<<"\n\nCHICKEN ROLL"     <<setw(30)<<v<<setw(28)<<"Rs."<<v*rer;
                                    if(a>0)
                                        cout<<"\n\nCHICKEN BIRIYANI"  <<setw(30)<<a<<setw(30)<<"Rs."<<ab*bc;
                                    e=m*bir;
                                    f=n*per;
                                    g=o*der;
                                    h=p*mur;
                                    k=q*par;
                                    l=r*cor;
                                    w=s*twr;
                                    x=t*lur;
                                    y=u*tir;
                                    z=v*rer;
                                    cd=ab*bc;
                                    sum=e+f+g+h+k+l+w+x+y+z+cd;
                                    add=m+n+o+p+q+r+s+t+u+v+ab;
                                    file1.open("proj.txt",ios::app);
                                    file1<<sum;
                                    file1<<"\n";
                                    file1.close();
                                    cout<<"\n===============================================================================";
                                    cout<<"\nTOTAL:"<<setw(37)<<add<<setw(27)<<"Rs."<<sum;
                                    cout<<"\n\nTHANK YOU .\t\t\t     VISIT US AGAIN\n";
                                    getch();
                                    clrscr();
                                    goto again;
                        }
                        else
                        {
                            goto again;
                        }
            case 2:
                    cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
                    cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
                    cout<<"\n\n#CANTEEN WILL CLOSED ON TUESDAY";
                    cout<<"\n\n#ORDER ONCE DONE WILL NOT BE EXCHANGED/REPLACED";
                    cout<<"\n\n#TAKE YOUR SMART CARD WITH YOU";
                    cout<<"\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
                    cout<<"\n\n#DO NOT BREAK ANY CANTEEN ITEMS";
                    getch();
                    clrscr();
                    goto again;
            case 3:
                    main:;
                        file1.open("proj.txt",ios::app);
                        cout<<"\n\n\n\t\t\t     MITE CANTEEN MANAGEMENT";
                        cout<<"\n\n\nCONSUMER INFORMATION";
                        cout<<"\n\n\n\n NAME:";
                        cin>>name;
                        file1<<name<<" ";
                        cout<<"\n SERVICE NO.:";
                        cin>>a;
                        file1<<a<<" ";
                        cout<<"\n SMART CARD NO.:";
                        cin>>b;
                        file1<<b<<" ";
                        cout<<"\n PHONE NO.:";
                        cin>>c;
                        file1<<c<<" ";
                        file1<<"\n";
                        file1.close();
                        goto again;
            case 4:
                    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
                    cout<<"\n\nPress any key to exit...";
                    exit(0);
            default:
                    cout<<"Your choice is wrong";
                    getch();
                    goto again;
        }
                            // getch();
                            //return 0;
}

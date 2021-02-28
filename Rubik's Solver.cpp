#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>

using namespace std;

char net[20][20]={
	"   UUU",
	"   UUU",
	"   UUU",
	"   BBB",
	"   BBB",
	"   BBB",
	"LLLDDDRRR",
	"LLLDDDRRR",
	"LLLDDDRRR",
	"   FFF   ",
	"   FFF   ",
	"   FFF   "};
	
char& fcentre(){return net[10][4];}
char& fedge1(){return net[11][4];}
char& fedge2(){return net[10][5];}
char& fedge3(){return net[9][4];}
char& fedge4(){return net[10][3];}
char& fcorn1(){return net[11][3];}
char& fcorn2(){return net[11][5];}
char& fcorn3(){return net[9][5];}
char& fcorn4(){return net[9][3];}

char& ucentre(){return net[1][4];}
char& uedge1(){return net[2][4];}
char& uedge2(){return net[1][5];}
char& uedge3(){return net[0][4];}
char& uedge4(){return net[1][3];}
char& ucorn1(){return net[2][3];}
char& ucorn2(){return net[2][5];}
char& ucorn3(){return net[0][5];}
char& ucorn4(){return net[0][3];}

char& dcentre(){return net[7][4];}
char& dedge1(){return net[8][4];}
char& dedge2(){return net[7][5];}
char& dedge3(){return net[6][4];}
char& dedge4(){return net[7][3];}
char& dcorn1(){return net[8][3];}
char& dcorn2(){return net[8][5];}
char& dcorn3(){return net[6][5];}
char& dcorn4(){return net[6][3];}

char& bcentre(){return net[4][4];}
char& bedge1(){return net[3][4];}
char& bedge2(){return net[4][3];}
char& bedge3(){return net[5][4];}
char& bedge4(){return net[4][5];}
char& bcorn1(){return net[3][5];}
char& bcorn2(){return net[3][3];}
char& bcorn3(){return net[5][3];}
char& bcorn4(){return net[5][5];}

char& rcentre(){return net[7][7];}
char& redge1(){return net[7][8];}
char& redge2(){return net[6][7];}
char& redge3(){return net[7][6];}
char& redge4(){return net[8][7];}
char& rcorn1(){return net[8][8];}
char& rcorn2(){return net[6][8];}
char& rcorn3(){return net[6][6];}
char& rcorn4(){return net[8][6];}

char& lcentre(){return net[7][1];}
char& ledge1(){return net[7][0];}
char& ledge2(){return net[8][1];}
char& ledge3(){return net[7][2];}
char& ledge4(){return net[6][1];}
char& lcorn1(){return net[6][0];}
char& lcorn2(){return net[8][0];}
char& lcorn3(){return net[8][2];}
char& lcorn4(){return net[6][2];}

// ALGORITHMS

void R()
{char temp;
temp=redge1();
redge1()=redge4();
redge4()=redge3();
redge3()=redge2();
redge2()=temp;
temp=rcorn1();
rcorn1()=rcorn4();
rcorn4()=rcorn3();
rcorn3()=rcorn2();
rcorn2()=temp;

temp=uedge2();
uedge2()=fedge2();
fedge2()=dedge2();
dedge2()=bedge4();
bedge4()=temp;
temp=ucorn3();
ucorn3()=fcorn3();
fcorn3()=dcorn3();
dcorn3()=bcorn1();
bcorn1()=temp;
temp=ucorn2();
ucorn2()=fcorn2();
fcorn2()=dcorn2();
dcorn2()=bcorn4();
bcorn4()=temp;
	}	

void Ri(){
	char temp;
temp=redge1();
redge1()=redge2();
redge2()=redge3();
redge3()=redge4();
redge4()=temp;
temp=rcorn1();
rcorn1()=rcorn2();
rcorn2()=rcorn3();
rcorn3()=rcorn4();
rcorn4()=temp;

temp=uedge2();
uedge2()=bedge4();
bedge4()=dedge2();
dedge2()=fedge2();
fedge2()=temp;
temp=ucorn3();
ucorn3()=bcorn1();
bcorn1()=dcorn3();
dcorn3()=fcorn3();
fcorn3()=temp;
temp=ucorn2();
ucorn2()=bcorn4();
bcorn4()=dcorn2();
dcorn2()=fcorn2();
fcorn2()=temp;
}

void F()
{char temp;
temp=fedge1();
fedge1()=fedge4();
fedge4()=fedge3();
fedge3()=fedge2();
fedge2()=temp;
temp=fcorn1();
fcorn1()=fcorn4();
fcorn4()=fcorn3();
fcorn3()=fcorn2();
fcorn2()=temp;

temp=uedge3();
uedge3()=ledge2();
ledge2()=dedge1();
dedge1()=redge4();
redge4()=temp;
temp=ucorn3();
ucorn3()=lcorn2();
lcorn2()=dcorn1();
dcorn1()=rcorn4();
rcorn4()=temp;
temp=ucorn4();
ucorn4()=lcorn3();
lcorn3()=dcorn2();
dcorn2()=rcorn1();
rcorn1()=temp;	
}

void Fi()
{char temp;
temp=fedge1();
fedge1()=fedge2();
fedge2()=fedge3();
fedge3()=fedge4();
fedge4()=temp;
temp=fcorn1();
fcorn1()=fcorn2();
fcorn2()=fcorn3();
fcorn3()=fcorn4();
fcorn4()=temp;

temp=uedge3();
uedge3()=redge4();
redge4()=dedge1();
dedge1()=ledge2();
ledge2()=temp;
temp=ucorn3();
ucorn3()=rcorn4();
rcorn4()=dcorn1();
dcorn1()=lcorn2();
lcorn2()=temp;
temp=ucorn4();
ucorn4()=rcorn1();
rcorn1()=dcorn2();
dcorn2()=lcorn3();
lcorn3()=temp;
}	

void U()
{char temp;
temp=uedge1();
uedge1()=uedge4();
uedge4()=uedge3();
uedge3()=uedge2();
uedge2()=temp;
temp=ucorn1();
ucorn1()=ucorn4();
ucorn4()=ucorn3();
ucorn3()=ucorn2();
ucorn2()=temp;

temp=bedge1(); 
bedge1()=ledge1();
ledge1()=fedge1();
fedge1()=redge1();
redge1()=temp;
temp=bcorn1();
bcorn1()=lcorn1();
lcorn1()=fcorn1();
fcorn1()=rcorn1();
rcorn1()=temp;
temp=bcorn2();
bcorn2()=lcorn2();
lcorn2()=fcorn2();
fcorn2()=rcorn2();
rcorn2()=temp;	
}
	
void Ui()
{char temp;
temp=uedge1();
uedge1()=uedge2();
uedge2()=uedge3();
uedge3()=uedge4();
uedge4()=temp;
temp=ucorn1();
ucorn1()=ucorn2();
ucorn2()=ucorn3();
ucorn3()=ucorn4();
ucorn4()=temp;

temp=bedge1();
bedge1()=redge1();
redge1()=fedge1();
fedge1()=ledge1();
ledge1()=temp;
temp=bcorn1();
bcorn1()=rcorn1();
rcorn1()=fcorn1();
fcorn1()=lcorn1();
lcorn1()=temp;
temp=bcorn2();
bcorn2()=rcorn2();
rcorn2()=fcorn2();
fcorn2()=lcorn2();
lcorn2()=temp;
}	

void L()
{char temp;
temp=ledge1();
ledge1()=ledge4();
ledge4()=ledge3();
ledge3()=ledge2();
ledge2()=temp;
temp=lcorn1();
lcorn1()=lcorn4();
lcorn4()=lcorn3();
lcorn3()=lcorn2();
lcorn2()=temp;

temp=uedge4();
uedge4()=bedge2();
bedge2()=dedge4();
dedge4()=fedge4();
fedge4()=temp;
temp=ucorn1();
ucorn1()=bcorn3();
bcorn3()=dcorn1();
dcorn1()=fcorn1();
fcorn1()=temp;
temp=ucorn4();
ucorn4()=bcorn2();
bcorn2()=dcorn4();
dcorn4()=fcorn4();
fcorn4()=temp;
 } 

void Li()
{char temp;
temp=ledge1();
ledge1()=ledge2();
ledge2()=ledge3();
ledge3()=ledge4();
ledge4()=temp;
temp=lcorn1();
lcorn1()=lcorn2();
lcorn2()=lcorn3();
lcorn3()=lcorn4();
lcorn4()=temp;

temp=uedge4();
uedge4()=fedge4();
fedge4()=dedge4();
dedge4()=bedge2();
bedge2()=temp;
temp=ucorn1();
ucorn1()=fcorn1();
fcorn1()=dcorn1();
dcorn1()=bcorn3();
bcorn3()=temp;
temp=ucorn4();
ucorn4()=fcorn4();
fcorn4()=dcorn4();
dcorn4()=bcorn2();
bcorn2()=temp;	
}

void D()
{char temp;
temp=dedge1();
dedge1()=dedge4();
dedge4()=dedge3();
dedge3()=dedge2();
dedge2()=temp;
temp=dcorn1();
dcorn1()=dcorn4();
dcorn4()=dcorn3();
dcorn3()=dcorn2();
dcorn2()=temp;

temp=fedge3(); 
fedge3()=ledge3();
ledge3()=bedge3();
bedge3()=redge3();
redge3()=temp;
temp=fcorn3();
fcorn3()=lcorn3();
lcorn3()=bcorn3();
bcorn3()=rcorn3();
rcorn3()=temp;
temp=fcorn4();
fcorn4()=lcorn4();
lcorn4()=bcorn4();
bcorn4()=rcorn4();
rcorn4()=temp;
}

void Di()
{char temp;
temp=dedge1();
dedge1()=dedge2();
dedge2()=dedge3();
dedge3()=dedge4();
dedge4()=temp;
temp=dcorn1();
dcorn1()=dcorn2();
dcorn2()=dcorn3();
dcorn3()=dcorn4();
dcorn4()=temp;

temp=fedge3();
fedge3()=redge3();
redge3()=bedge3();
bedge3()=ledge3();
ledge3()=temp;
temp=fcorn3();
fcorn3()=rcorn3();
rcorn3()=bcorn3();
bcorn3()=lcorn3();
lcorn3()=temp;
temp=fcorn4();
fcorn4()=rcorn4();
rcorn4()=bcorn4();
bcorn4()=lcorn4();
lcorn4()=temp;
}

void B()
{char temp;
temp=bedge1();
bedge1()=bedge4();
bedge4()=bedge3();
bedge3()=bedge2();
bedge2()=temp;
temp=bcorn1();
bcorn1()=bcorn4();
bcorn4()=bcorn3();
bcorn3()=bcorn2();
bcorn2()=temp;

temp=uedge1(); 
uedge1()=redge2();
redge2()=dedge3();
dedge3()=ledge4();
ledge4()=temp;
temp=ucorn1();
ucorn1()=rcorn2();
rcorn2()=dcorn3();
dcorn3()=lcorn4();
lcorn4()=temp;
temp=ucorn2();
ucorn2()=rcorn3();
rcorn3()=dcorn4();
dcorn4()=lcorn1();
lcorn1()=temp;
}
	
void Bi()
{char temp;
temp=bedge1();
bedge1()=bedge2();
bedge2()=bedge3();
bedge3()=bedge4();
bedge4()=temp;
temp=bcorn1();
bcorn1()=bcorn2();
bcorn2()=bcorn3();
bcorn3()=bcorn4();
bcorn4()=temp;

temp=uedge1();
uedge1()=ledge4();
ledge4()=dedge3();
dedge3()=redge2();
redge2()=temp;
temp=ucorn1();
ucorn1()=lcorn4();
lcorn4()=dcorn3();
dcorn3()=rcorn2();
rcorn2()=temp;
temp=ucorn2();
ucorn2()=lcorn1();
lcorn1()=dcorn4();
dcorn4()=rcorn3();
rcorn3()=temp;
}

void M() // SPL. MIDDLE ALGORITHM AS ALTERNATIVE FOR TURNING CUBE ON AXIS
{char temp;
temp=fcentre();
fcentre()=rcentre();
rcentre()=bcentre();
bcentre()=lcentre();
lcentre()=temp;
temp=fedge2();
fedge2()=redge2();
redge2()=bedge2();
bedge2()=ledge2();
ledge2()=temp;
temp=fedge4();
fedge4()=redge4();
redge4()=bedge4();
bedge4()=ledge4();
ledge4()=temp;}

void M2(){        // SPL ALOGRITHM TO TURN CUBE ON OTHER AXIS-USED FOR TURNING CUBE UPSIDE DOWN IN 3RD LAYER
char temp;
temp=ucentre();
ucentre()=lcentre();
lcentre()=dcentre();
dcentre()=rcentre();
rcentre()=temp;
temp=uedge2();
uedge2()=ledge1();
ledge1()=dedge4();
dedge4()=redge3();
redge3()=temp;
temp=uedge4();
uedge4()=ledge3();
ledge3()=dedge2();
dedge2()=redge1();
redge1()=temp;	
}
	
// END OF ALGORITHM FUNCTIONS	
	
void input(char side)
{
	int i,j,x,y;
	
	switch(side){
		
	case 'F': x=11;	y=3; break;// done
	case 'L': x=6;	y=0; break;// done
	case 'D': x=8;	y=3; break;// done
	case 'R': x=8; 	y=8; break;// done
	case 'B': x=3; 	y=5; break;// done
	case 'U': x=2; y=3;  break;// done
}
    if(side=='F'||side=='D'||side=='U')
	for(i=x;i>x-3;i--)
	{for(j=y;j<y+3;j++)
	{net[i][j]=getch();
	cout<<net[i][j];}
	cout<<endl;}
	
	else if(side=='B')
	for(i=x;i<x+3;i++)
	{for(j=y;j>y-3;j--)
	{net[i][j]=getch();
	cout<<net[i][j];}
	cout<<endl;}
	
	else if(side=='R')
	for(j=x;j>x-3;j--)
	{for(i=y;i>y-3;i--)
	{net[i][j]=getch();
	cout<<net[i][j];}
	cout<<endl;}
	
	else if(side=='L')
	for(j=y;j<y+3;j++)
	{for(i=x;i<x+3;i++)
	{net[i][j]=getch();
	cout<<net[i][j];}
	cout<<endl;}
		
}


int main()
{	
 
    int i,j;
    for(i=0;i<12;i++)
//    puts(net[i]);
//    getch();
    system("cls");
	cout<<"Enter 'FRONT' side colours. (R/G/B/Y/O/W)\n";
    input('F');
    system("cls");
    cout<<"Enter 'LEFT' side colours. (R/G/B/Y/O/W)\n";
    input('L');
    system("cls");
    cout<<"Enter 'DOWN' side colours. (R/G/B/Y/O/W)\n";
    input('D');
    system("cls");
    cout<<"Enter 'RIGHT' side colours. (R/G/B/Y/O/W)\n";
    input('R');
    system("cls");
    cout<<"Enter 'BACK' side colours. (R/G/B/Y/O/W)\n";
    input('B');
    system("cls");
    cout<<"Enter 'UP' side colours. (R/G/B/Y/O/W)\n";
    input('U');
    system("cls");
    
    for(i=0;i<12;i++)
    puts(net[i]);
    getch();    
    system("cls");
    
int x=1,y=0;
char nR='R',nRi[3]="Ri",nL='L',nLi[3]="Li",nU='U',nUi[3]="Ui",nB='B',nBi[3]="Bi",nD='D',nDi[3]="Di",nF='F',nFi[3]="Fi";
    cout<<"           Algorithms\n\n";
    cout<<"Layer 1\n-----\nCross:\n";
    // FIRST LAYER
   for(x=1;x<=4;x++) 
    {cout<<++y<<". ";
	for(i=0;i<=3;i++)
	{if(fedge3()==fcentre()&&dedge1()==ucentre())
	{for(j=0;j<i;j++)
	cout<<"D ";
    cout<<nF<<" "<<nF<<" ";
	F();
	F();
	break;}
	else if(fedge3()==ucentre()&&dedge1()==fcentre())
	{
	for(j=0;j<i;j++)
	cout<<"D ";
	cout<<nD<<" "<<nR<<" "<<nFi<<" "<<nRi<<" ";
	D();
	R();
	Fi();
	Ri();
	break;}
	else
	{D();}
} 
if(fedge1()==fcentre()&&uedge3()==ucentre())  // IF ALREADY IN CORRECT POS.
{i=3;
cout<<"-";}
if(fedge1()==ucentre()&&uedge3()==fcentre())
{cout<<nF<<" "<<nF<<" "<<nD<<" "<<nR<<" "<<nFi<<" "<<nRi<<" ";
F();
F();
D();
R();
Fi();
Ri();
i=3;}

if(i==4)
{
if(fedge2()==fcentre()&&redge4()==ucentre())             
{cout<<nFi<<" ";                                         
Fi();}
else if(fedge2()==ucentre()&&redge4()==fcentre())
{cout<<nRi<<" "<<nDi<<" "<<nR<<" "<<nF<<" "<<nF<<" ";
Ri();
Di();
R();
F();
F();}
else if(fedge4()==fcentre()&&ledge2()==ucentre())
{cout<<nF<<" ";
F();}
else if(fedge4()==ucentre()&&ledge2()==fcentre())
{cout<<nL<<" "<<nD<<" "<<nLi<<" "<<nF<<" "<<nF<<" ";
L();
D();
Li();
F();
F();}
else if(redge1()==fcentre()&&uedge2()==ucentre())
{cout<<nR<<" "<<nR<<" "<<nDi<<" "<<nF<<" "<<nF<<" ";
R();
R();
Di();
F();
F();}
else if(redge1()==ucentre()&&uedge2()==fcentre())
{cout<<nRi<<" "<<nFi<<" ";
Ri();
Fi();}
else if(ledge1()==fcentre()&&uedge4()==ucentre())
{cout<<nL<<" "<<nL<<" "<<nD<<" "<<nF<<" "<<nF<<" ";
L();
L();
D();
F();
F();}
else if(ledge1()==ucentre()&&uedge4()==fcentre())
{cout<<nL<<" "<<nF<<" ";
L();
F();}
else if(bedge1()==fcentre()&&uedge1()==ucentre())
{cout<<nB<<" "<<nB<<" "<<nD<<" "<<nD<<" "<<nF<<" "<<nF<<" ";
B();
B();
D();
D();
F();
F();}
else if(bedge1()==ucentre()&&uedge1()==fcentre())
{cout<<nB<<" "<<nB<<" "<<nD<<" "<<nLi<<" "<<nF<<" "<<nL<<" ";
B();
B();
D();
Li();
F();
L();}
else if(redge2()==ucentre()&&bedge4()==fcentre())
{cout<<nR<<" "<<nR<<" "<<nFi<<" "<<nR<<" "<<nR<<" ";
R();
R();
Fi();
R();
R();}
else if(redge2()==fcentre()&&bedge4()==ucentre())
{cout<<nR<<" "<<nDi<<" "<<nRi<<" "<<nF<<" "<<nF<<" ";
R();
Di();
Ri();
F();
F();}
else if(ledge4()==ucentre()&&bedge2()==fcentre())
{cout<<nL<<" "<<nL<<" "<<nF<<" "<<nL<<" "<<nL<<" ";
L();
L();
F();
L();
L();}
else if(ledge4()==fcentre()&&bedge2()==ucentre())
{cout<<nLi<<" "<<nD<<" "<<nL<<" "<<nF<<" "<<nF<<" ";
Li();
D();
L();
F();
F();}
}  // END OF IF i==4
cout<<endl;
U();    //Simulates
M();    //turning of cube
Di();   //to the left on x-axis
switch(x)  //Changes displayed to algorithm to suit users POV
{case 1: nF='R'; nFi[0]='R'; nR='B'; nRi[0]='B'; nL='F'; nLi[0]='F'; nB='L'; nBi[0]='L'; break;
case 2: nF='B'; nFi[0]='B'; nR='L'; nRi[0]='L'; nL='R'; nLi[0]='R'; nB='F'; nBi[0]='F'; break;
case 3: nF='L'; nFi[0]='L'; nR='F'; nRi[0]='F'; nL='B'; nLi[0]='B'; nB='R'; nBi[0]='R'; break;
}
}
// END OF 1st LAYER CROSS

//FIRST LAYER CORNERS
nR='R';nRi[0]='R';nL='L';nLi[0]='L';nU='U';nUi[0]='U';nB='B';nBi[0]='B';nD='D';nDi[0]='D';nF='F';nFi[0]='F';  
//^^^Restores Displayed Algorithms as Virtual cube has been reset due to 4 times of turning^^^

cout<<"\nCorners:\n";
y=0;
for(x=1;x<=4;x++){
	cout<<++y<<". ";
for(i=1;i<=9;i++){

if(ucorn3()==ucentre()&&fcorn2()==fcentre()&&rcorn1()==rcentre())
{cout<<"-";
break;}

else if(fcorn3()==ucentre()&&rcorn4()==rcentre()&&dcorn2()==fcentre())
{switch(i-1){   // 	Displays algorithm to user to bring corner piece to desired position (by the switch case at the end of dis loop)
	case 1: cout<<nD<<" "; break;
	case 2: cout<<nD<<" "<<nD<<" "; break;
	case 3: cout<<nD<<" "<<nD<<" "<<nD<<" "; break;
	case 4: cout<<nD<<" "; break;
	case 5: cout<<nRi<<" "<<nDi<<" "<<nR<<" "<<nD<<" "; break;
	case 6: cout<<nL<<" "<<nD<<" "<<nLi<<" "; break;
	case 7: cout<<nBi<<" "<<nDi<<" "<<nB<<" "; break;
	case 8: cout<<nB<<" "<<nD<<" "<<nD<<" "<<nBi<<" "; break;
}
cout<<nDi<<" "<<nRi<<" "<<nD<<" "<<nR<<" ";
Di();
Ri();
D();
R();
break;}    
else if(rcorn4()==ucentre()&&fcorn3()==fcentre()&&dcorn2()==rcentre())
{switch(i-1){
	case 1: cout<<nD<<" "; break;
	case 2: cout<<nD<<" "<<nD<<" "; break;
	case 3: cout<<nD<<" "<<nD<<" "<<nD<<" "; break;
	case 4: cout<<nD<<" "; break;
	case 5: cout<<nRi<<" "<<nDi<<" "<<nR<<" "<<nD<<" "; break;
	case 6: cout<<nL<<" "<<nD<<" "<<nLi<<" "; break;
	case 7: cout<<nBi<<" "<<nDi<<" "<<nB<<" "; break;
	case 8: cout<<nB<<" "<<nD<<" "<<nD<<" "<<nBi<<" "; break;
}
cout<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" ";
D();
F();
Di();
Fi();
break;}
else if(fcorn3()==rcentre()&&rcorn4()==fcentre()&&dcorn2()==ucentre())
{switch(i-1){
	case 1: cout<<nD<<" "; break;
	case 2: cout<<nD<<" "<<nD<<" "; break;
	case 3: cout<<nD<<" "<<nD<<" "<<nD<<" "; break;
	case 4: cout<<nD<<" "; break;
	case 5: cout<<nRi<<" "<<nDi<<" "<<nR<<" "<<nD<<" "; break;
	case 6: cout<<nL<<" "<<nD<<" "<<nLi<<" "; break;
	case 7: cout<<nBi<<" "<<nDi<<" "<<nB<<" "; break;
	case 8: cout<<nB<<" "<<nD<<" "<<nD<<" "<<nBi<<" "; break;
}
cout<<nRi<<" "<<nDi<<" "<<nDi<<" "<<nR<<" "<<nD<<" "<<nRi<<" "<<nDi<<" "<<nR<<" ";
Ri();
Di();
Di();
R();
D();
Ri();
Di();
R();
break;}
switch(i){
	case 1: D(); break;
	case 2: D(); break;
	case 3: D(); break;
	case 4: D(); break;
	case 5: Ri(); Di(); R(); D(); break;
	case 6: Di(); Ri(); D(); R();/*<-- algs to reverse effects of prev. case (correction 1)*/ L(); D(); Li(); break;
	case 7: L(); Di(); Li();/*<--*/ Bi(); Di(); B(); break;
	case 8: Bi(); D(); B();/*<--*/ B(); D(); D(); Bi(); break;
}
}

U();
M();
Di();
cout<<endl;
switch(x)
{case 1: nF='R'; nFi[0]='R'; nR='B'; nRi[0]='B'; nL='F'; nLi[0]='F'; nB='L'; nBi[0]='L'; break;
case 2: nF='B'; nFi[0]='B'; nR='L'; nRi[0]='L'; nL='R'; nLi[0]='R'; nB='F'; nBi[0]='F'; break;
case 3: nF='L'; nFi[0]='L'; nR='F'; nRi[0]='F'; nL='B'; nLi[0]='B'; nB='R'; nBi[0]='R'; break;
}
}
    
 // CORNERS ARE BUGGY - AT TIMES COMPLETELY SOLVED, AT TIMES ONLY 3 OR 2 - FIRST CORNER ALWAYS SOLVED 
 //update 01/09/17 - above problem solved - correction 1
 
 // END OF LAYER 1
 
 //LAYER 2 (EDGES)
 y=0;
 nR='R';nRi[0]='R';nL='L';nLi[0]='L';nU='U';nUi[0]='U';nB='B';nBi[0]='B';nD='D';nDi[0]='D';nF='F';nFi[0]='F'; // Resetting
 
 cout<<"\n\nLayer 2\n-------\n";
 for(x=1;x<=4;x++)
 {cout<<++y<<". ";
 for(i=1,j=1;j<=5;i++)
  {
  	if(fedge2()==fcentre()&&redge4()==rcentre())
  	{
  	    switch(j)
	  {case 2: cout<<nRi<<" "<<nD<<" "<<nR<<" "<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" "; break;
	   case 3: cout<<nBi<<" "<<nD<<" "<<nB<<" "<<nD<<" "<<nR<<" "<<nDi<<" "<<nRi<<" "; break;
	   case 4: cout<<nLi<<" "<<nD<<" "<<nL<<" "<<nD<<" "<<nB<<" "<<nDi<<" "<<nBi<<" "; break;
	   case 5: cout<<nFi<<" "<<nD<<" "<<nF<<" "<<nD<<" "<<nL<<" "<<nDi<<" "<<nLi<<" "; break;
        } 	
	  cout<<"-";
	  break;}
	  else if(fedge3()==fcentre()&&dedge1()==rcentre())
	  {
	   switch(j)
	  {case 2: cout<<nRi<<" "<<nD<<" "<<nR<<" "<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" "; break;
	   case 3: cout<<nBi<<" "<<nD<<" "<<nB<<" "<<nD<<" "<<nR<<" "<<nDi<<" "<<nRi<<" "; break;
	   case 4: cout<<nLi<<" "<<nD<<" "<<nL<<" "<<nD<<" "<<nB<<" "<<nDi<<" "<<nBi<<" "; break;
	   case 5: cout<<nFi<<" "<<nD<<" "<<nF<<" "<<nD<<" "<<nL<<" "<<nDi<<" "<<nLi<<" "; break;
        }  
	  switch(i)
	  {case 2: cout<<nDi<<" "; break;
	  case 3: cout<<nDi<<" "<<nDi<<" ";break;
	  case 4: cout<<nD<<" "; break;
	  }
	 
	  cout<<nDi<<" "<<nRi<<" "<<nD<<" "<<nR<<" "<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" ";
	  Di();Ri();D();R();D();F();Di();Fi(); break;}
	  
	   else if(fedge3()==rcentre()&&dedge1()==fcentre())
	  {
	    switch(j)
	  {case 2: cout<<nRi<<" "<<nD<<" "<<nR<<" "<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" "; break;
	   case 3: cout<<nBi<<" "<<nD<<" "<<nB<<" "<<nD<<" "<<nR<<" "<<nDi<<" "<<nRi<<" "; break;
	   case 4: cout<<nLi<<" "<<nD<<" "<<nL<<" "<<nD<<" "<<nB<<" "<<nDi<<" "<<nBi<<" "; break;
	   case 5: cout<<nFi<<" "<<nD<<" "<<nF<<" "<<nD<<" "<<nL<<" "<<nDi<<" "<<nLi<<" "; break;
        }  
	  switch(i)
	  {case 2:cout<<nDi<<" "; break;
	  case 3: cout<<nDi<<" "<<nDi<<" ";break;
	  case 4: cout<<nD<<" "; break;
	  }
	  cout<<nD<<" "<<nD<<" "<<nF<<" "<<nDi<<" "<<nFi<<" "<<nDi<<" "<<nRi<<" "<<nD<<" "<<nR<<" ";
	  D();D();F();Di();Fi();Di();Ri();D();R(); break;}
	  
	  if(i<=4)
	  Di();   
	  else
	  {i=0;
	  switch(j)
	  {case 1: Ri(); D(); R(); D(); F(); Di(); Fi(); break;
	   case 2: F(); D(); Fi(); Di(); Ri(); Di(); R();     Bi(); D(); B(); D(); R(); Di(); Ri(); break;
	   case 3: R(); D(); Ri(); Di(); Bi(); Di(); B();     Li(); D(); L(); D(); B(); Di(); Bi(); break;
	   case 4: B(); D(); Bi(); Di(); Li(); Di(); L();     Fi(); D(); F(); D(); L(); Di(); Li(); break;
        } 
		j++;}
	  }
U();
M();
Di();
cout<<endl;	  
switch(x)
{case 1: nF='R'; nFi[0]='R'; nR='B'; nRi[0]='B'; nL='F'; nLi[0]='F'; nB='L'; nBi[0]='L'; break;
case 2: nF='B'; nFi[0]='B'; nR='L'; nRi[0]='L'; nL='R'; nLi[0]='R'; nB='F'; nBi[0]='F'; break;
case 3: nF='L'; nFi[0]='L'; nR='F'; nRi[0]='F'; nL='B'; nLi[0]='B'; nB='R'; nBi[0]='R'; break;
}
	   }  
	   
// SECOND LAYER COMPLETED, ON 08/10/2017 (NOTE-ONLY TESTED TWICE) -  DEEMED PROOF ENOUGH FOR GENERAL SUCCESS	   
	   
// THIRD LAYER	
   
F();    // TURNING
F();       // CUBE
M2();        //  UPSIDE
M2();            //DOWN
Bi();
Bi();

nR='L';nRi[0]='L';nL='R';nLi[0]='R';nU='D';nUi[0]='D';nB='B';nBi[0]='B';nD='U';nDi[0]='U';nF='F';nFi[0]='F'; // Resetting with new cube orientaiton
	   
// THIRD LAYER CROSS
cout<<endl<<"Layer 3:\n-------\n\nCross:\n";
if(uedge1()!=ucentre()||uedge2()!=ucentre()||uedge3()!=ucentre()||uedge4()!=ucentre())
{
//line
if(uedge1()==ucentre()&&uedge3()==ucentre())
{U();
cout<<nU<<" ";}
if(uedge2()==ucentre()&&uedge4()==ucentre())
{F(); R(); U(); Ri(); Ui(); Fi();
cout<<nF<<" "<<nR<<" "<<nU<<" "<<nRi<<" "<<nUi<<" "<<nFi<<" ";}
else 
{
// L shape
if(uedge1()==ucentre()&&uedge2()==ucentre())
{Ui();
cout<<nUi<<" ";}
else if(uedge2()==ucentre()&&uedge3()==ucentre())
{U(); U();
cout<<nU<<" "<<nU<<" ";}
else if(uedge3()==ucentre()&&uedge4()==ucentre())
{U();
cout<<nU<<" ";}
if(uedge1()==ucentre()&&uedge4()==ucentre()) // final confirmation if the layer is in desired form  ie if the above 3 ifs worked
{F(); U(); R(); Ui(); Ri(); Fi();
cout<<nF<<" "<<nU<<" "<<nR<<" "<<nUi<<" "<<nRi<<" "<<nFi<<" ";}
}
if(uedge1()!=ucentre())
{F(); U(); R(); Ui(); Ri(); Fi(); U(); F(); R(); U(); Ri(); Ui(); Fi();
cout<<nF<<" "<<nU<<" "<<nR<<" "<<nUi<<" "<<nRi<<" "<<nFi<<" "<<nU<<" "<<nF<<" "<<nR<<" "<<nU<<" "<<nRi<<" "<<nUi<<" "<<nFi<<" ";}	   
}
// THIRD LAYER CROSS WORKING, COMPLETED ON 08/10/2017 11:26 PM - NOTE ONLY CHECKED ONCE -DEEMED AS GENERALLY SUCCESSFULL
cout<<endl;
//THIRD LAYER CENTRES
cout<<"Centres:\n";
if(fedge1()==fcentre()&&redge1()==rcentre()&&bedge1()==bcentre()&&ledge1()==lcentre())
;
else
{
while(fedge1()!=fcentre())
{U();
cout<<nU<<" ";}	
cout<<endl;	
while(fedge1()!=fcentre()||redge1()!=rcentre()||bedge1()!=bcentre()||ledge1()!=lcentre())	
{
	if(ledge1()==lcentre())
	{Ui();   L();U();U();Li();Ui();L();Ui();Li();
	cout<<nUi<<" "<<nL<<" "<<nU<<" "<<nU<<" "<<nLi<<" "<<nUi<<" "<<nL<<" "<<nUi<<" "<<nLi<<" ";	}
	
	else if(redge1()==rcentre())
	{Ui();   F();U();U();Fi();Ui();F();Ui();Fi();
	cout<<nUi<<" "<<nF<<" "<<nU<<" "<<nU<<" "<<nFi<<" "<<nUi<<" "<<nF<<" "<<nUi<<" "<<nFi<<" ";	}
	
	else if(bedge1()==bcentre())
	{R();U();U();Ri();Ui();R();Ui();Ri();   Ui();   L();U();U();Li();Ui();L();Ui();Li();
	cout<<nR<<" "<<nU<<" "<<nU<<" "<<nRi<<" "<<nUi<<" "<<nR<<" "<<nUi<<" "<<nRi<<" "<<nUi<<" "<<nL<<" "<<nU<<" "<<nU<<" "<<nLi<<" "<<nUi<<" "<<nL<<" "<<nUi<<" "<<nLi<<" ";	}
	
	else
	{R();U();U();Ri();Ui();R();Ui();Ri();
	cout<<nR<<" "<<nU<<" "<<nU<<" "<<nRi<<" "<<nUi<<" "<<nR<<" "<<nUi<<" "<<nRi<<" ";
	}
}
	} // END OF LAYER 3 CENTRES - TESTED, WORKING ONCE - 29/04/2018

cout<<endl;

//3RD LAYER CORNERS
cout<<"\nCorners:\n";

class corn{
public:
int corn1(){
if((fcorn2()==fcentre()&&rcorn1()==rcentre()&&ucorn3()==ucentre())||(fcorn2()==ucentre()&&rcorn1()==fcentre()&&ucorn3()==rcentre())||(fcorn2()==rcentre()&&rcorn1()==ucentre()&&ucorn3()==fcentre()))
return 1;
else
return 0;}

int corn2(){
if((rcorn2()==rcentre()&&bcorn1()==bcentre()&&ucorn2()==ucentre())||(rcorn2()==ucentre()&&bcorn1()==rcentre()&&ucorn2()==bcentre())||(rcorn2()==bcentre()&&bcorn1()==ucentre()&&ucorn2()==rcentre()))	
return 1;
else
return 0;}

int corn3(){
if((bcorn2()==bcentre()&&lcorn1()==lcentre()&&ucorn1()==ucentre())||(bcorn2()==ucentre()&&lcorn1()==bcentre()&&ucorn1()==lcentre())||(bcorn2()==lcentre()&&lcorn1()==ucentre()&&ucorn1()==bcentre()))
return 1;
else 
return 0;}

int corn4(){
if((lcorn2()==lcentre()&&fcorn1()==fcentre()&&ucorn4()==ucentre())||(lcorn2()==ucentre()&&fcorn1()==lcentre()&&ucorn4()==fcentre())||(lcorn2()==fcentre()&&fcorn1()==ucentre()&&ucorn4()==lcentre()))
return 1;
else
return 0;}

} c;

/*if((fcorn2==fcentre()&&rcorn1()==rcentre()&&ucorn3()==ucentre())||(fcorn2()==ucentre()&&rcorn1()==fcentre()&&ucorn3()==rcentre)||(fcorn2()==rcentre()&&rcorn1()==ucentre()&&ucorn3()==fcentre())&&
   (rcorn2==rcentre()&&bcorn1()==bcentre()&&ucorn2()==ucentre())||(rcorn2()==ucentre()&&bcorn1()==rcentre()&&ucorn2()==bcentre)||(rcorn2()==bcentre()&&bcorn1()==ucentre()&&ucorn2()==rcentre())&&
   (bcorn2==bcentre()&&lcorn1()==lcentre()&&ucorn1()==ucentre())||(bcorn2()==ucentre()&&lcorn1()==bcentre()&&ucorn1()==lcentre)||(bcorn2()==lcentre()&&lcorn1()==ucentre()&&ucorn1()==bcentre())&&
   (lcorn2==lcentre()&&fcorn1()==fcentre()&&ucorn4()==ucentre())||(lcorn2()==ucentre()&&fcorn1()==lcentre()&&ucorn4()==fcentre)||(lcorn2()==fcentre()&&fcorn1()==ucentre()&&ucorn4()==lcentre()))
*/
if(c.corn1()&&c.corn2()&&c.corn3()&&c.corn4())
{;}
else
{
while(!c.corn1()||!c.corn2()||!c.corn3()||!c.corn4())
{
if(c.corn1()&&!c.corn2()&&!c.corn3()&&!c.corn4())
{Li(); U(); R(); Ui(); L(); U(); Ri(); Ui();
cout<<nLi<<" "<<nU<<" "<<nR<<" "<<nUi<<" "<<nL<<" "<<nU<<" "<<nRi<<" "<<nUi<<" ";	}	

else if(!c.corn1()&&c.corn2()&&!c.corn3()&&!c.corn4())
{Fi(); U(); B(); Ui(); F(); U(); Bi(); Ui();
cout<<nFi<<" "<<nU<<" "<<nB<<" "<<nUi<<" "<<nF<<" "<<nU<<" "<<nBi<<" "<<nUi<<" ";	}

else if(!c.corn1()&&!c.corn2()&&c.corn3()&&!c.corn4())
{Ri(); U(); L(); Ui(); R(); U(); Li(); Ui();
cout<<nRi<<" "<<nU<<" "<<nL<<" "<<nUi<<" "<<nR<<" "<<nU<<" "<<nLi<<" "<<nUi<<" ";	}

else if(!c.corn1()&&!c.corn2()&&!c.corn3()&&c.corn4())
{Bi(); U(); F(); Ui(); B(); U(); Fi(); Ui();
cout<<nBi<<" "<<nU<<" "<<nF<<" "<<nUi<<" "<<nB<<" "<<nU<<" "<<nFi<<" "<<nUi<<" ";	}	

else if(!c.corn1()&&!c.corn2()&&!c.corn3()&&!c.corn4())
 {Li(); U(); R(); Ui(); L(); U(); Ri(); Ui();
cout<<nLi<<" "<<nU<<" "<<nR<<" "<<nUi<<" "<<nL<<" "<<nU<<" "<<nRi<<" "<<nUi<<" ";	}	

} // end of while loop
}
// end of 3rd layer corners

//3rd layer  corner orienting
cout<<endl<<endl;
int tt,pp=0;
for(tt=0;tt<4;tt++)
{
while(ucorn3()!=ucentre())
{Ri(); D(); R(); Di();
cout<<++pp<<"."<<nRi<<" "<<nD<<" "<<nR<<" "<<nDi<<" ";}
U(); pp=0;
cout<<endl<<nU<<"\n";}

cout<<"\n\n*********************SOLVED**********************";
}		

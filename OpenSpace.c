
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int DrawSystem5x2(), DrawSystem2x1();

// omjer - 50:108
// potrebni omjer - 90:102
main()

{
DrawSystem4x2();
}

/************* DRAW SYSTEM 4x2 ************/

// omjer - 200:216

int DrawSystem4x2()

{ int i,j;

for (j=11; j>=-12; j=j-1)
 {
  for (i=-6; i<=6; i++)
  {
   if (abs((j+i)%2) == 0) printf("/%3d", (j-(j<0))/2); else printf("\\___");

  }
  printf("\n");
}

  printf("\n");

}

/************* DRAW SYSTEM 2x1 ************/

// omjer 100:108

int DrawSystem2x1()

{ int i,j;

for (j=1; j<25; j++)
  {
   for (i=1; i<=(abs(12-j)); i++) printf(" ");

   if( j<12 ) printf("/"); 
     else 
     if (j==12) printf("|");
     else printf("\\");

   for (i=1; i<23-(abs(j-12)); i++) printf(". ");

   if( j>12 ) printf("/"); 
     else 
     if (j==12) printf("|");
     else printf("\\");


   for (i=1; i<(12-j); i++) printf(" ");
   printf("\n");
  }
return 0;
}

int DrawSystem1x1()

{ int i,j;

for (j=1; j<=21; j++)
 {
  printf("     ");
  for (i=1; i<=41; i++)
    printf("*"); 
  printf("\n");
 }
}


/************* end draw system 2x1 ************/

/*************** KOORDINATNI SUSTAVI *********************
row = z;
col = x + (z - (z&1)) / 2;

if ((x<=0) && (y>0) && (z<0)) sxt = "A";
if ((x<0) && (y>0) && (z>=0)) sxt = "B";
if ((x<0) && (y<=0) && (z>0)) sxt = "C";
if ((x>=0) && (y<0) && (z>0)) sxt = "D";
if ((x>0) && (y<0) && (z<=0)) sxt = "E";
if ((x>0) && (y>=0) && (z<0)) sxt = "F";

r = (abs(x) + abs(y) + abs(z)) / 2

if ((sxt="A") || (sxt="D")) deg = abs(x);
if ((sxt="B") || (sxt="E")) deg = abs(z);
if ((sxt="C") || (sxt="F")) deg = abs(y);

****************** end *******************************/

/***************** STAR SYSTEM *******************/

 

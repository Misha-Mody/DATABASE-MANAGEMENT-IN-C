
#include<stdio.h>
#include<string.h>
#include<conio.h>

// DECLARING THE ELEMENTS OF ARRAY
struct tickets{
  char pname[10];
  char bo[10];
  char des[10];
  int sno;
  int bno;
  }t[10];

// DEFINING FUNCTION TO ADD TICKETS LATER
int add(struct tickets t[10],int n)
{  printf("\n");
     printf("\nHOW MANY TICKETS DO YOU WANT TO ADD?\t");
    int r,s;
    scanf("%d",&r);
     int i;
 for(i=n;i<n+r;i++)
   { printf("\n");
	printf("\n");
    printf("\nRECORDING INFO FOR PASSSENGER %d",i+1);
    printf("\n");
    printf("\nENTER PERSON NAME\t");
    scanf("%s",&t[i].pname);
    printf("\nENTER BOARDING CITY\t");
    scanf("%s",&t[i].bo);
    printf("\nENTER DESTINATION CITY\t");
    scanf("%s",&t[i].des);
    printf("\nENTER SEAT NUMBER\t");
    scanf("%d",&t[i].sno);
    printf("\nENTER BOOKING NUMBER %\t");
    scanf("%d",&t[i].bno);
    }
    s=n+r;
	  return s;

}

// DEFINING FUNCTION TO ACCEPT THE TICKETS FOR THE FIRST TIME
int accept(struct tickets t[10])
{   printf("\n");
     printf("\nHOW MANY TICKETS DO YOU WANT TO BOOK?\t");
    int n;
    scanf("%d",&n);
     int i;
     for(i=0;i<n;i++)
    { printf("\n");
	printf("\n");
    printf("\nRECORDING INFO FOR PASSSENGER %d",i+1);
    printf("\n");
    printf("\nENTER PERSON NAME\t");
    scanf("%s",&t[i].pname);
    printf("\nENTER BOARDING CITY\t");
    scanf("%s",&t[i].bo);
    printf("\nENTER DESTINATION CITY\t");
    scanf("%s",&t[i].des);
    printf("\nENTER SEAT NUMBER\t");
    scanf("%d",&t[i].sno);
    printf("\nENTER BOOKING NUMBER %\t");
    scanf("%d",&t[i].bno);
    }
    return n;

}


//DEFINING FUNCTION TO MODIFY ANY TICKETS LATER
 void mod(int n)

 {
 	 printf("\nENTER BOOKING NUMBER OF PASSENGER YOU WANT TO MODIFY\t");
 	 int m,i,k=0;
 	 scanf("%d",&m);
 	 for(i=0;i<n;i++)
    {
      if(m==t[i].bno)
     {

        k=1;


        break;
     }
     else
     {
        k=0;
     }

   }
   if(k=1)
   {  printf("\n");
    printf("\nENTER PERSON NAME\t");
    scanf("%s",&t[i].pname);
    printf("\nENTER BOARDING CITY\t");
    scanf("%s",&t[i].bo);
    printf("\nENTER DESTINATION CITY\t");
    scanf("%s",&t[i].des);
    printf("\nENTER SEAT NUMBER\t");
    scanf("%d",&t[i].sno);
    printf("\nENTER BOOKING NUMBER %\t");
    scanf("%d",&t[i].bno);

   }
 	 else
 	  printf("MATCH NOT FOUND");

 }


//DEFINING FUNCTION TO DELETE A PARTICULAR RECORD
int del(struct tickets t[10],int n)
{  printf("\nENTER BOOKING NUMBER OF PASSENGER YOU WANT TO DELETE\t");
    int m,i,k=0,s;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
      if(m==t[i].bno)
     {

        k=1;


        break;
     }
     else
     {
        k=0;
     }

   }
   if(k=1)
   {        for(s=i;s<=n;s++)
  {
      t[s]=t[s+1];

  }
   printf("\nBOOKING DELETED!");}

   else

      printf("MATCH NOT FOUND");



return (n-1);
}

//DEFINING FUNCTION TO PRINT THE RECORD
void print(struct tickets t[10],int n)
{int i;

for(i=0;i<n;i++)
{printf("\n");
printf("\n");
 printf("\nDISPLAYING INFO FOR PASSSENGER %d",i+1);
printf("\n");
printf("\nPERSON NAME IS :%s",t[i].pname);
printf("\nBOARDING CITY IS :%s",t[i].bo);
printf("\nDESTINATION CITY IS :%s",t[i].des);
printf("\nSEAT NUMBER IS :%d",t[i].sno);
printf("\nBOOKING NUMBER IS :%d",t[i].bno);
}

}

//DEFINING FUNCTION TO SORT BY STRING(PASSENGER NAME)
void sort2(int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
   {
   	for(j=0;j<n-1-i;j++)
   	{ if(strcmp(t[j].pname,t[j+1].pname)>0)
   	    {  struct tickets r;
   	       r=t[j];
   		   t[j]=t[j+1];
   		   t[j+1]=r;
   	    }
   	  }
	   }


}

//DEFINING FUNCTION TO SORT BY INTEGER
void sort1(int n,struct tickets t[10])
{
   int i,j;
   for(i=0;i<n-1;i++)
   {
   	for(j=0;j<n-1-i;j++)
   	{
   		if(t[j].bno>t[j+1].bno)
   		{
   		   struct tickets r;
   		   r=t[j];
   		   t[j]=t[j+1];
   		   t[j+1]=r;
   		}
   	}
   }
}

// APPLYING BINARY SEARCH TO PASSENGER NAME
void bin2(int n)
{
    printf("\n");
    printf("******************************TO SEARCH DATA*******************************\n");
    printf("\nENTER NAME OF PASSENGER\t");
    char y[5];
    char x[10];
 
    int p=0;
    scanf("%s",&y[5]);
    int f=0,l=n-1,m;
    while(f<=l)
    {   m=(f+l)/2;
        strcpy(x,t[m].pname);
    	if(strcmp(x,y)<0)
    	 {
		 f=m+1;
    	 }
    	else if(strcmp(x,y)==0)
    	{
          p=1;
    	 break;
		}
       else
    	 { l=m-1;
    	 }
    }
    if(p==1)
    {
    	    	 printf("MATCH FOUND");
    	 printf("\n");
         printf("DISLAYING DATA OF MATCH ");
         printf("\n");
         printf("\nPERSON NAME IS :%s",t[m].pname);
         printf("\nBOARDING CITY IS :%s",t[m].bo);
         printf("\nDESTINATION CITY IS :%s",t[m].des);
         printf("\nSEAT NUMBER IS :%d",t[m].sno);
         printf("\nBOOKING NUMBER IS :%d",t[m].bno);
	}
	else
	{  printf("MATCH NOT FOUND");
		
	}
}

//APPLYING BINARY SEARCH TO INT
 void bin1(int n)
 {printf("\n");
    printf("******************************TO SEARCH DATA*******************************");
    printf("\nENTER BOOKING NUMBER OF PASSENGER\t");
    int y;
    scanf("%d",&y);
    int f=0,l=n-1,m=(f+l)/2;
    while(f<=l)
    {
    	if(t[m].bno<y)
    	{
		f=m+1;
    	m=(f+l)/2;}
    	else if(t[m].bno==y)
    	{
    	printf("MATCH FOUND");
    	printf("\n");
    printf("DISLAYING DATA OF MATCH ");
    printf("\n");
    printf("\nPERSON NAME IS :%s",t[m].pname);
    printf("\nBOARDING CITY IS :%s",t[m].bo);
    printf("\nDESTINATION CITY IS :%s",t[m].des);
    printf("\nSEAT NUMBER IS :%d",t[m].sno);
    printf("\nBOOKING NUMBER IS :%d",t[m].bno);
    	break;}
    	else
    	{ l=m-1;
    	m=(f+l)/2;
    	}

    }
    if(f>l)
    { printf("MATCH NOT FOUND");
    }


 }

 //APPLYING LINEAR SEARCH
void search(struct tickets t[10],int n)
{printf("\n");
printf("******************************TO SEARCH DATA*******************************");
    printf("\nENTER BOOKING NUMBER OF PASSENGER\t");
    int m,i,k=0;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
      if(m==t[i].bno)
     {
        printf("\nMATCH FOUND");

        k=1;
        break;
     }
     else
     {
        k=0;
     }

   }
   if(k==1)
   {printf("\n");
   printf("\n");
   printf("DISLAYING DATA OF MATCH ");
   printf("\n");
   printf("\nPERSON NAME IS :%s",t[i].pname);
   printf("\nBOARDING CITY IS :%s",t[i].bo);
   printf("\nDESTINATION CITY IS :%s",t[i].des);
   printf("\nSEAT NUMBER IS :%d",t[i].sno);
   printf("\nBOOKING NUMBER IS :%d",t[i].bno);
   }
   else
   {
   printf("MATCH NOT FOUND");}
}


 int main()
{

	printf("*******************************WELCOME TO JET AIRWYS TICKET BOOKING SYSTEM********************************************");
    int j;
    printf("\nENTER PASSWORD\t");
    char u;
    scanf("%c",&u);
    if(u=='M')
   {
    j=accept(t);
    print(t,j);
     while(5<6)
   {printf("\n");
   	printf("*******************************ENTER YOUR CHOICE********************************************");
     printf("\nPRESS 1 TO SEARCH DATA \nPRESS 2 TO ADD DATA \nPRESS 3 TO EXIT");
     printf("\nPRESS 4 TO PRINT DATA \nPRESS 5 TO DELETE DATA \nPRESS 6 TO MODIFY DATA \nPRESS 7 TO SORT DATA\n");

     printf("\n*******************************************************************************************");
    printf("\n");
     int m;
	 scanf("%d",&m);
	 // SWITCH CASE TO GIVE OPTIONS
      switch(m)
     { case 1: printf("PRESS 1 TO SEARCH BY LINEAR SEARCH AND 2 TO SEARCH BY BINARY SEARCH\t\n");
               int f,v;
               scanf("%d",&f);
               if(f==1)
                 search(t,j);
                 else
                 {
                 	printf("PRESS 1 TO SEARCH BY BOOKING NUMBER AND 2 TO SEARCH BY PASSENGER NAME\t\n");
                 	scanf("%d",&v);
                 	if(v==1)
                 	  {	sort1(j,t);
					   bin1(j);}
					   else
					   {
					   	sort2(j);
					   	bin2(j);


					   }
             }
       break;
       case 2:j=add(t,j);

       break;
       case 3: return 0;
       break;
       case 4:


               print(t,j);
       break;
       case 5:j=del(t,j);
       break;

       case 6: mod(j);
       break;
    case 7:
    	printf("PRESS 1 TO SORT BY BOOKING NUMBER AND 2 TO SORT BY PASSENGER NAME\t\n");
    	int o;
    	scanf("%d",&o);
    	if(o==1)
    	{
    	sort1(j,t);
    	print(t,j);
		}
        else
        {
        	sort2(j);
              print(t,j);
        }
    	break;
	}
}
}
   return 0;
}


#include<iostream>
#include<string>
#include<stdio.h>
#define dfaString "hello"

#define true 1
#define false 0
int trasition;
int static count;
int M=5;
using namespace std;
int static TF[10][256];

char getChar()
{
char ch;
cin>>ch;
return ch;
}
void makeDFA()
{
int i,x,len=5,m,n;
char pattern[]=dfaString;

	for(i=0;i<=len;i++)
	{
		for(x=0;x<256;x++)
		{
			TF[i][x]=0;
		}
		if(i!=5)
		{
		TF[i][pattern[i]]=1;
		if(i==1)
		TF[i][pattern[0]]=1;
		}
	
	
	}
	
	
	 
}



bool parseForHello(char c)
{
	int n,m;
	
	
    
     int j;
	 
		j=TF[count][c];
		
		
       if(j)
	   {
	  
		if(c=='h')
		{
		
		count=1;
		return false;
		}
	    else
		{
		
		
	    count++;
		
		if(count==5)
		return true;
		else 
		return false;
		
		}
		
	}
	else
		{count=0;
		return false;
		
	  

}
}


int main()
{


bool helloFound ;
char c;
makeDFA();
while(true)
{

c=getChar();



helloFound= parseForHello(c);


if(helloFound)
{
break;
}
}
return 0;
}
    
    
    
   
    
    

    
 



 

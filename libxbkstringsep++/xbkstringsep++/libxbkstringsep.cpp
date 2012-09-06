/*
    libxbkstringsep++  library to separate a string by a token
    Copyright (C) 2003 Boris Koester 

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public
    License along with this library; if not, write to the Free
    Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
    MA 02111-1307, USA

	Boris Koester
	Postfach 70 18
	57358 Lennestadt-Meggen
	Commercial Support: support@x-itec.net 
	Private: x-itec@gmx.de
	Homepage: http://www.x-itec.net
	Updates:  http://www.x-itec.net/libxbkstringsep++
*/
    
#include<string>
#include<iostream>
#include<stdio.h>

#include "libxbkstringsep.h"

//#define DEBUGME

#include "qa/xbkdebug.c"


using namespace std;


string& xbkstringsep::operator[](int x)
{
int counter=inputstring.size();
int p=0;
int c=0;
result="";

//Startposition ausfindig machen
DEBUG("Stringlaenge: %i",counter);
while(p<x && c<counter)
{
DEBUG("WHILE... ");
for(c=0;c<counter;c++)
 {
  DEBUG("POS %i Zeichen %c",c,inputstring[c]);
  if(inputstring[c]==separator[0])
   {
    DEBUG("SPRUNG p++; %i",p);
    p++; if(p>=x){++c;break;}
   }
 }
DEBUG("C: %i/%i\n",c,counter);
}
//String kopieren bis StringEnde oder bis zum naechsten Separator
DEBUG("Startpos Textkopie: %i\n",c);
while(inputstring[c] !=separator[0] && c<counter)
{
DEBUG("C / CO %i %i\n",c,counter);
result=result+inputstring[c++];  
DEBUG("Res bisher: %s\n",result.c_str());
}

return result;
}

int xbkstringsep::count()
{
int x=0;
xbkstringsep q;
q=*this;
do
{
DEBUG("COUNTER: %i",x);
}while (q[x++].length()>0);
return x-1;
}

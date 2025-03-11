/***************************************************************** 

    File: lab5.c
    Author: [Your Name]
    Student Number: [Your Student Number]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab5.c lab5main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "lab5.h"

int sum(const int array[], int size)
{
    int sum=0;
    int i = 0;   //하나씩 다 넣어보고 tracking 해보기.

    for(i=0; i<size; i++)
    { 
        sum += array[i];
     
    }
    return sum;
}

void reverse(int array[], int size)
{
    int num =size-1;
    int temp[size];

    
    for(int i=0; i<size; i++)
    {
      temp[i]=array[i];
    }  

    for (int i=0; i < size; i++)
    {
        array[i]=temp[num--];

    } //이거는 address efficient 면에서 안좋음... 아래 방법으로 한번 사용 해보삼.
}
/**/
void reverse(int array[], int size){
    int temp = 0;
    for (int i=0; i < size; i++){
        temp=array[i];
        if(i<size/2){  //우리는 반반 나눠서 스왑 하고 싶기때문에 이렇게 하삼.
            array[i] = array[size -1 -i];
            array[size - 1 - i] =temp;
        }
    }
}
/**/

int countChar(char ch,const char str[])
{
    int chs=0;
    int i=0;

    do 
    {
       if(str[i]==ch)
        {
            chs += 1;
        }
        
        i++;
            
    }
    while (str[i]!='\0');
 
    return chs;
}

int countAllCase(char ch, const char str[])
{
    int CHs=0;
    int i=0;

    char temp[100];


    if(ch >='a' && ch <='z')
        {
            ch =(char)(ch -32);
        }    
    
    do 
    {

        if(str[i] >='a' && str[i] <='z')
        {
            temp[i]=(char)(str[i]-32);
        }
        else
        {
            temp[i]=str[i];
        }
        i++;
            
        
    }
    while (str[i]!='\0');

    CHs = countChar(ch,temp);

    return CHs;
}
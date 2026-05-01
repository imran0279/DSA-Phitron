//Ascending order
#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={100,512,6,724,31,14,2,0};
    int len= sizeof(ar) / sizeof(ar[0]);
    for(int i = 0; i < len ; i++)
    {
        printf(" %d", ar[i]);
    }
    printf("\n");
    sort(ar,ar+len);
    for(int i = 0;i <len;i++)
    {
         printf(" %d",ar[i]);
    }
     printf("\n");

}


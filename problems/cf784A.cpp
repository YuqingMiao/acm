//
// Created by Miao on 2017/4/12.
//
//joke number
//http://oeis.org/search?q=joke+number&language=english&go=Search
#include<bits/stdc++.h>
using namespace std;
int n;
int a[]={4,22, 27, 58, 85, 94, 121, 166, 202, 265, 274,
         319, 346, 355, 378, 382, 391, 438,
         454, 483, 517, 526, 535, 562, 576,
         588, 627, 634, 636, 645, 648, 654,
         663,666,690,706,728,729,762,778};
int main()
{
    scanf("%d",&n);
    printf("%d",a[n-1]);
    return 0;
}
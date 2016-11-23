//
//  main.cpp
//  Acm
//
//  Created by 管君 on 16/3/14.
//  Copyright © 2016年 カンクン. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <map>
#include <string>
#include <math.h>
#include <set>
#include <queue>
#include <algorithm>


#define sf scanf
#define pf printf
#define rep(i,n) for(int i = 0;i<n;++i)
#define FOR(i,s,e) for(int i = s;i<=e;++i)
#define LL long long
#define ULL unsigned long long

using namespace std;

int gcd(int a,int b);
void swap(int &a,int &b);

int main()
{
    ios::sync_with_stdio(0);
    int T;
    double B,LS;
    cin >> T;
    while(T--)
    {
        cin >> B >> LS;
        cout << sqrt(LS*LS - B*B) << " " << sqrt(B*B + LS*LS) << endl;
    }


    return 0;
}
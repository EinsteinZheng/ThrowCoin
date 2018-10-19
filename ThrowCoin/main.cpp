//
//  main.cpp
//  ThrowCoin
//
//  Created by Zheng on 10/5/18.
//  Copyright © 2018 Monkey Coder Studio. All rights reserved.
//

#include <iostream>
#include<random>
#include<stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    string luanma;
    long times;
    int front = 0,back = 0;//,fronts[6],backs[6];
    cout<<"Please input the times of throwing a coin:";
    cin>>times;
    random_device rd("/dev/random");
    for(int i=0;i<times;i++)
    {
        (rd()%2==1)?(front+=1):(back+=1);
    }
    /*for(int i=0;i<6;i++)
    {
        fronts[i]=0;
    }
    for(int i=0;i<6;i++)
    {
        backs[i]=0;
    }
    for(int j=0;j<6;j++)
    {
        for(int i=0;i<times;i++)
        {
            (rd()%2==1)?(fronts[j]+=1):(backs[j]+=1);
        }
    }
    for(int i=0;i<6;i++)
    {
        front+=fronts[i];
    }
    front/=6;
    for(int i=0;i<6;i++)
    {
        back+=backs[i];
    }
    back/=6;*/
    cout<<"Front:"<<front<<endl<<"Back:"<<back<<endl;
    return 0;
}

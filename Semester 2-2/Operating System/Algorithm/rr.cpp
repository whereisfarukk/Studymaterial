#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int n;
int time_slice;

queue<int>q;

struct process{
    bool exist_in_queue;
    int id;
    int arrival_time;
    int brust_time;
    int brust_time_for_calc;
    int completion_time;
    int turn_around_time;
    int waiting_time;
};
process p[100005];

bool sorting_data(process a,process b){

    if(a.arrival_time!=b.arrival_time){
         return a.arrival_time<b.arrival_time;
    }

    return a.brust_time<b.brust_time;
}

void RR(){
    int complete,current_time,index,minimum;
    double total_turn_around_time=0;
    double total_waiting_time=0;

    current_time=p[0].arrival_time;
    p[0].exist_in_queue=true;

    q.push(0);
    
    cout<<"index : "<<endl;

    while (!q.empty()){
        int index = q.front();
        cout<<"Now selecting :"<<index<<endl;
        q.pop();
        p[index].exist_in_queue=false;


        
        if(p[index].brust_time_for_calc>=time_slice){
            p[index].brust_time_for_calc-=time_slice;
            current_time+=time_slice;
        }
        else{
            current_time+=p[index].brust_time_for_calc;
            p[index].brust_time_for_calc=0;
        } 

        for(int i=0;i<n;i++){
            if(i==index){
                continue;
            }

            if(p[i].arrival_time<=current_time && p[i].brust_time_for_calc!=0 && p[i].exist_in_queue==false){
                q.push(i);
                p[i].exist_in_queue=true;
                cout<<"Pushing ar: "<<i<<endl;
            }
        }

        if(p[index].brust_time_for_calc!=0){
            q.push(index);
            p[index].exist_in_queue=true;
            cout<<"Pushing un: "<<index<<endl;
            
        }

        if(p[index].brust_time_for_calc==0){

            p[index].completion_time = current_time;
            p[index].turn_around_time = p[index].completion_time - p[index].arrival_time;
            p[index].waiting_time = p[index].turn_around_time - p[index].brust_time;

            total_waiting_time +=p[index].waiting_time;
            total_turn_around_time+= p[index].turn_around_time;
        }

        
    }
    
    
    cout<<"Average Waiting Time: "<<(total_waiting_time/n)<<endl;
    cout<<"Average Turn Around Time: "<<(total_turn_around_time/n)<<endl;

}


int main(){
    cout<<"Enter time slice :";
    cin>>time_slice;

    cout<<"Enter number of process : ";
    cin>>n;
    for(int i=0;i<n;i++){
        //cout<<"Enter ID : ";
        cin>>p[i].id;
    }


    for(int i=0;i<n;i++){
       // cout<<"Enter process "<<i<<" arrival time : ";
        cin>>p[i].arrival_time;
    }

    for(int i=0;i<n;i++){
       // cout<<"Enter process "<<i<<" brust time : ";
        cin>>p[i].brust_time;
        p[i].brust_time_for_calc = p[i].brust_time;
        p[i].exist_in_queue = false;
    }

    sort(p,p+n,sorting_data);
    
    cout<<"Before :"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].id<<" "<<p[i].arrival_time<<" "<<p[i].brust_time<<endl;
    }

    
    

    RR();


    return 0;
}
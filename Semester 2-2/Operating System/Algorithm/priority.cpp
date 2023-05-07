#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int n;
struct process{
    int id;
    int priority;
    int arrival_time;
    int brust_time;
    int completion_time;
    int turn_around_time;
    int waiting_time;
};
process p[100005];

bool sorting_data(process a,process b){

    if(a.arrival_time!=b.arrival_time){
         return a.arrival_time<b.arrival_time;
    }
    if(a.priority!=b.priority){
        return a.priority<b.priority;
    }
    return a.brust_time<b.brust_time;
}

void SJF(){
    int complete,current_time,index,minimum;
    double total_turn_around_time=0;
    double total_waiting_time=0;

    index=-1;
    complete=0;
    current_time=0;
    minimum = INT_MAX;

    cout<<"Index :"<<endl;
    while (complete<n){
        for(int i=0;i<n;i++){
            if(p[i].arrival_time<=current_time){
                if(p[i].priority< minimum && p[i].completion_time==0){
                    index=i;
                    minimum=p[i].priority;
                    //cout<<i<<" "<<p[i].arrival_time<<" "<<p[i].brust_time<<endl;
                }
            }
        }
       
        if(index>=0){
            
            complete++;
            minimum = INT_MAX;
            current_time+=p[index].brust_time;
            p[index].completion_time = current_time;
            p[index].turn_around_time = p[index].completion_time - p[index].arrival_time;
            p[index].waiting_time = p[index].turn_around_time - p[index].brust_time;

            total_waiting_time +=p[index].waiting_time;
            total_turn_around_time+= p[index].turn_around_time;

            cout<<p[index].id<<endl;

            index = -1;
        }
        else{
            current_time++;
        }
    }
    
    cout<<"Average Waiting Time: "<<(total_waiting_time/n)<<endl;
    cout<<"Average Turn Around Time: "<<(total_turn_around_time/n)<<endl;

}


int main(){
    
    cout<<"Enter number of process : ";
    cin>>n;
    for(int i=0;i<n;i++){
        //cout<<"Enter ID : ";
        cin>>p[i].id;
    }

    for(int i=0;i<n;i++){
        //cout<<"Enter priority : ";
        cin>>p[i].priority;
    }
    for(int i=0;i<n;i++){
       // cout<<"Enter process "<<i<<" arrival time : ";
        cin>>p[i].arrival_time;
    }

    for(int i=0;i<n;i++){
       // cout<<"Enter process "<<i<<" brust time : ";
        cin>>p[i].brust_time;
    }

    sort(p,p+n,sorting_data);
    
    cout<<"Before :"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i].id<<" "<<p[i].priority<<" "<<p[i].arrival_time<<" "<<p[i].brust_time<<endl;
    }
    

    SJF();


    return 0;
}
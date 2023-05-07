#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m,i,j,k;
    n = 5;
    m = 3;
    int c =0;
    int res[3]={10,5,7};
    int alloc[5][3]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};

    int max[5][3]={{7,5,3},{3,2,2},{9,0,2},{4,2,2},{5,3,3}};

    int avail[3]={3,3,2};

    int f[n],ans[n],ind=0;

    for(k=0;k<n;k++){
       f[k]=0;
    }

    int need[n][m];

    for(i=0;i<n;i++){
        for( j=0;j<m;j++){
            need[i][j]=max[i][j]-alloc[i][j];
        }
    }
          
    int y=0;

    for(k=0;k<5;k++){
        for(i=0;i<5;i++){
            if(f[i]==0){
                int flag=0;
                for(j=0;j<3;j++){
                    if(need[i][j]>avail[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans[ind++]=i;
                    for(y=0;y<m;y++){
                        avail[y]+=alloc[i][y];
                    }
                    f[i]=1;
                }
            }
        }
    }

    for(i=0;i<3;i++){
        cout<<avail[i]<<endl;
    }
    
    for(i=0;i<3;i++){
        if(res[i]==avail[i]){
            c++;
        }
    }

    if(c==3){
        cout<<"System is safe"<<endl;
    }
    else{
         cout<<"System is unsafe"<<endl;
    }

    cout<<"Seq:"<<endl;
    for(i=0;i<n;i++){
        cout<<"P"<<ans[i]+1<<"-> ";
    }


    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int Ra,Ca,Rb,Cb,i,j,k;
    int A[100][100];
    int B[100][100];
    int C[100][100];

    // ÊäÈë
    cin>>Ra>>Ca;
    for(i=0;i<Ra;i++)
    {
        for(j=0;j<Ca;j++)
        {
            cin>>A[i][j];
        }
    }
    cin>>Rb>>Cb;
    for(i=0;i<Rb;i++)
    {
        for(j=0;j<Cb;j++)
        {
            cin>>B[i][j];
        }
    }

    // ÅÐ¶Ï&Êä³ö
    if(Ca!=Rb) cout<<"Error: "<<Ca<<" != "<<Rb;
    else
    {
        cout<<Ra<<" "<<Cb<<endl;
        for(i=0;i<Ra;i++)
        {
            for(j=0;j<Cb;j++)
            {
                C[i][j]=0;
                for(k=0;k<Ca;k++)
                {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        for(i=0;i<Ra;i++)
        {
            for(j=0;j<Cb;j++)
            {
                cout<<C[i][j];
                if(j!=Cb-1)   cout<<" ";
            }
            if(i!=Ra-1) cout<<endl;
        }
    }


    return 0;
}

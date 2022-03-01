#include<iostream>
using namespace std;
void knapsack(int n,float w[],float p[],float W)
{
    float x[20],tp =0;
    int i ,j, rc;
    rc=W;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(w[i]>rc)
        break;
        else{
            x[i]=1.0;
            tp= tp + p[i];
            rc=rc-w[i];
        }
    }
    if(i<n)
        x[i]=rc/w[i];
    tp= tp+ (x[i]*p[i]);
    cout<<"The total profits="<<tp<<endl;
    cout<<"The objects included are ";
    for(i=0;i<n;i++)
    cout<<x[i]<<" ";
}
int main(){
    float w[20],p[20],W,ratio[20],temp;
    int num, i, j;
    cout<<"Enter the number of objects: "<< endl;
    cin>>num;
    cout<<"Enter the weights of each objects"<<endl;
    for( i=0;i<num;i++)
    {
        cin>>w[i];
    }
    cout<<"Enter the profits of each object"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>p[i];
    }
    cout<<"Enter the capacity of knapsack: "<<endl;
    cin>>W;
    for(i=0;i<num;i++)
    {
        ratio[i]=p[i]/w[i];
    }
    for( i=0; i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(ratio[i]<ratio[j])
            {
                temp=ratio[j];
                ratio[j]=ratio[i];
                ratio[i]=temp;

                temp=w[j];
                w[j]=w[i];
                w[i]=temp;

                temp=p[j];
                p[j]=p[i];
                p[i]=temp;
            }
        }
    }
    knapsack(num, w,p,W);
    return(0);
}

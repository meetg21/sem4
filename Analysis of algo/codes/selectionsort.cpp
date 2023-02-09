#include<iostream>
using namespace std;


int sort(int a[]){
for(int i=0;i<5-1;i++)
{
    int i_min =i;
    for(int j=i+1;j<5;j++)
    {
        if(a[j]<a[i_min])
        {
            i_min=j;
        }
    }
        int temp=a[i];
        a[i]=a[i_min];
        a[i_min]=temp;

}
for(int i=0;i<5;i++)
{
    cout<<a[i]<<endl;

}
}



int main()
{
    int a[]={23,12,5,44,22};
    sort(a);

}
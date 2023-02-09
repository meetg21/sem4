#include <bits/stdc++.h>
using namespace std;

void bubble(int a[])
{
    for(int i=0;i<sizeof(a);i++)
 {
        for(int j=0;j<sizeof(a)-i;j++)
        {
            if (a[j]>a[j+1])
            {
                int x = a[j];
                a[j]=a[j+1];
                a[j+1]=x;
             }
        }
 }
    for (int i=0;i<sizeof(a);i++)  {
        cout<<a[i]<<" "<<endl;
    }
}
int main(){
    int a[]={2,22,12,5,15};
    cout<<"hello";
    bubble(a);
    return 0;
}
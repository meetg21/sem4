#include<iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int sort(int* a,int n)
{
    for(int i=0;i<n;i++)
    {
    int x = a[i];
    int j = i - 1;

    while (x < a[j] && j >= 0) {
      a[j + 1] = a[j];
      --j;
    }
    a[j + 1] = x;
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i];
    // }

    return 0;
}

int Select_sort(int* a,int n){
for(int i=0;i<n-1;i++)
{
    int i_min =i;
    for(int j=i+1;j<n;j++)
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
// for(int i=0;i<n;i++)
// {
//     cout<<a[i];

// }
return 0;
}


int bubble(int * a,int n)
{
    for(int i=0;i<n;i++)
 {
        for(int j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                int x = a[j];
                a[j]=a[j+1];
                a[j+1]=x;
             }
        }
 }
    // for (int i=0;i<n;i++)  {
    //     cout<<a[i];
    // }

return 0;
}

int main()
{
int n=1000;
 while(n<5001)
    {cout<<n<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i]=n-i;
    auto start = high_resolution_clock::now();
    sort(arr,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "insertion sort ko "<<duration.count() <<" itna time laga"<< endl;
    start = high_resolution_clock::now();
    Select_sort(arr,n);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop - start);
    cout << "selection sort ko "<<duration.count() <<" itna time laga"<< endl;
    start = high_resolution_clock::now();
    bubble(arr,n);
    stop = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(stop-start);
    cout<<"bubble sort ko "<<duration.count()<<" itna time laga"<<endl;
    n=n+500;
    }


    return 0;
}
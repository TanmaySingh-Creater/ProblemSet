#include <iostream>

using namespace std;
 
int main()
{
    int n ;
    cin >>n;
    int arr[1000];
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int count = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(arr[i]<min)
        {
            count++;
            min = arr[i];
        }
        if(arr[i]>max)
        {
            count++;
            max= arr[i];
        }
    }
    cout<<count;
    return 0;
}
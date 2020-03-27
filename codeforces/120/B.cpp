#include<bits/stdc++.h>
using namespace std;
int num[1234];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int len,que,a,flag = 0;
    scanf("%d%d",&len,&que);
    for(int i = 1;i<=len;i++)
    {
        scanf("%d",&a);
        if(a) num[flag++] = i;
    }
    num[flag++] = len+num[0];
    int ans = lower_bound(num,num+flag,que)-num;
    printf("%d\n",num[ans]>len?num[ans]-len:num[ans]);
    return 0;
}
